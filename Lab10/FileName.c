#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#include <locale.h>
double fa(double x) {

	double y;
	if (x <= 3) (y = pow(x, 2) - 3 * x + 9);
	else y = 1 / (pow(x, 3) + 3);
	return y;
}
double fb(double x) {
	double y;
	y = x * exp(sin(pow(x, 2)));
	return y;
}

void main()//номер 1 л/р 10
{
	setlocale(LC_ALL, "RUS");
	double y, x;
	scanf("%lf",  &x);
	printf("fa(x)=%lf , fb(x)=%lf \n", fa(x), fb(x));
	printf("Произведение=%lf \n Разность квадратов=%lf \n Удвоенная сумма=%lf", fa(x) * fb(x), pow(fa(x),2)-pow(fb(x),2),2*(fa(x)+fb(x)));
}