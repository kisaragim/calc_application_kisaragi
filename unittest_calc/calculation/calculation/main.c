#include"calculation.h"

void output();

void main() {

	Input_number();
	return;
}


void output(double *sum) {
	int len;
	len = strlen(sum);

	if (255 < len)
	{
		printf("\n�G���[�F�������傫�����܂�");
	}
	else
	{
		printf("= %.0lf", *sum);
	}
	

}