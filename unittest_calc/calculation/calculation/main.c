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
		printf("\nƒGƒ‰[FŒ…”‚ª‘å‚«‚·‚¬‚Ü‚·");
	}
	else
	{
		printf("= %.0lf", *sum);
	}
	

}