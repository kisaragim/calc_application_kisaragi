#include "calculation.h"
#include "ctype.h"
#include "locale.h"

char Delete_space();
int Check_number();


void Input_number() {

	char calc[600];
	fgets(calc, 600, stdin);
	int len , len2 , i=0;
	
	//新規入力２０１８/１１/２０
	//ここから
	len2 = strlen(calc);
	setlocale(LC_CTYPE, "jpn");
	for (i = 0; i < len2; i++) {
		len = mblen(&calc[i], MB_CUR_MAX);
		//printf("%d ", len);
		if (len == 2 )
		{
			printf("エラー：全角では入力できません");
			return;
		}

	}
	//ここまで


	Delete_space(calc);

	//printf("%s", calc);

	int validate = Check_number(calc);

	if (validate == 0)
	{
		printf("%s ", calc);
		calculation(calc);
	}
	else if (validate == 1)
	{
		printf("エラー：桁数が多すぎます");
	}
	else if (validate == 2)
	{
		printf("エラー：入力がありません");
	}
	else if (validate == 3)
	{
		printf("エラー：扱えない文字があります");
	}
	else if (validate == 4)
	{
		printf("エラー：数式ではありません");
	}
	else if (validate == 5)
	{
		printf("エラー：最初に'0'を入れては行けません");
	}
	else
	{
		printf("error");
	}
	return;

}



char Delete_space(char *calc){
	char *p = calc;

	while (*p != '\0') {
		if (!isspace(*p)) {
			*calc = *p;
			calc++;
		}
		p++;
	}
	*calc = '\0';
	return calc;
}

int Check_number(char *calc) {
	int leftbrackets = 0, rightbrackets = 0;
	int len = strlen(calc);
	if (255 < len)
	{
		return 1;
	}
	else if (len == 0)
	{
		return 2;
	}

	int i ;
	char c ,d;
	for ( i = 0; *(calc +i) != '\0'; i++)
	{
		c = *(calc + i);
		if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7'
			|| c == '8' || c == '9' || c == '0' || c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')' || c == '\n')
		{
			if (i == 0 )
			{
				if ( c == '0')
				{
					return 5;
				}
				if (c == '+' || c == '-' || c == '*' || c == '/')
				{
					return 4;
				}
			}

			if (c == '+' || c == '-' || c == '*' || c == '/')
			{
				d = *(calc + (i + 1));

				if (d == '+' || d =='-' || d =='*' || d =='/')
				{
					return 4;
				}
			}
			//追記場所2018 / 11 / 21
			if (calc[len-1] == '+' || calc[len - 1] == '-' || calc[len - 1] == '*' || calc[len - 1] == '/')
			{
				return 4;
			}
			//ここまで
		}

		else
		{
			return 3;
		}
	}


	for ( i = 0; i < len; i++)
	{
		if (calc[i] == '(')
		{
			leftbrackets++;
		}
		else if (calc[i] == ')')
		{
			rightbrackets++;
		}
		if (leftbrackets < rightbrackets)
		{
			return 4;
		}
	}
	if (leftbrackets != rightbrackets)
	{
		return 4;
	}



	return 0;
}

