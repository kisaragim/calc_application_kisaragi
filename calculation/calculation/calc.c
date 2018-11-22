#include"calculation.h"

void calculation(char * calc)
{
	char var_stack[600];
	char porstr[600][500];
	char str_number[600];

	int i;
	int k = 0;
	int stacksize = 0;
	int numstrsize = 0;

	int len = strlen(calc);
	for (i = len; i > 0; i--){
		calc[i] = calc[i - 1];
	}
	calc[0] = '(';
	len += 2;
	calc[len - 1] = ')';
	calc[len] = '\0';



	for (i = 0; i < len; i++) {
		switch (calc[i]) {
		case '0':case '1':case '2':case '3':case '4': case '5':case '6':case '7':case '8':case '9':
			str_number[numstrsize] = calc[i];
			numstrsize++;
			break;

		case '+':
		case '-':
			if (numstrsize > 0) {
				str_number[numstrsize] = '\0';
				strcpy(porstr[k], str_number);
				k++;
				numstrsize = 0;
			}
			while (stacksize > 0) {
				if (var_stack[stacksize - 1] == '(') {
					break;
				}

				porstr[k][0] = var_stack[stacksize - 1];
				porstr[k][1] = '\0';
				k++;
				stacksize--;
			}
			var_stack[stacksize] = calc[i];
			stacksize++;
			break;

		case '*':
		case '/': 
			if (numstrsize > 0) {
				str_number[numstrsize] = '\0';
				strcpy(porstr[k], str_number);
				k++;
			}
			numstrsize = 0;
			if (stacksize > 0 && (var_stack[stacksize - 1] == '*' || var_stack[stacksize - 1] == '/')) {
				porstr[k][0] = var_stack[stacksize - 1];
				porstr[k][1] = '\0';
				k++;
				stacksize--;
			}
			var_stack[stacksize] = calc[i];
			stacksize++;
			break;

		case '(':
			var_stack[stacksize] = calc[i];
			stacksize++;
			break;

		case ')':
			if (numstrsize > 0) {
				str_number[numstrsize] = '\0';
				strcpy(porstr[k], str_number);
				k++;
			}
			numstrsize = 0;
			while (stacksize > 0) {
				if (var_stack[stacksize - 1] == '(') {
					stacksize--;
					break;
				}
				porstr[k][0] = var_stack[stacksize - 1];
				porstr[k][1] = '\0';
				k++;
				stacksize--;
			}
			break;
		}
	}

	double sum[600];
	int num =0;

	for (i = 0; i < k; i++) {
		if (porstr[i][0] >= '0'&&porstr[i][0] <= '9') {
			sum[num] = atof(porstr[i]);
			num++;
		}

		else {
			if (num < 2) {
				printf("�G���[\n");
				return ;
			}
			double value1, value2;
			value1 = sum[num - 2];
			value2 = sum[num - 1];
			switch (porstr[i][0]) {
			case '-':sum[num - 2] = (value1 - value2);
				break;
			case '+':sum[num - 2] = (value1 + value2);
				break;
			case '/':sum[num - 2] = (value1 / value2);
				if (value2 == 0)
				{
					printf("0�ł͊���܂���");
					return;
				}
				break;
			case '*':sum[num - 2] = (value1*value2);
				break;
			}
			num--;
		}
	}
	if (num != 1) {
		printf("�G���[\n");
		return ;
	}


	sum[0] = floor(*sum + 0.5);
	//printf("%lf" , sum[0]);

	output(sum);

	return;
}

//�C���_
//�P�DDelete_space�̏������̕ύX
//�Q�DCheck_number�ɂ�����G���[�ԍ��R�̏������̕ύX
//�R�DCheck_number�ɂ�����G���[�ԍ��S�Ɏd�l�̒ǉ��i�ꌅ�ڂɂO�������ꍇ�G���[�j