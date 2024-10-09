#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#include <locale.h>
double f(double z) {

	double y;

	y = pow(z, 3) + 3 * pow(z, 2) - 3;
	return y;
}




void main()//номер 2  8 л/р (вариант 9 )
{
	setlocale(LC_ALL, "RUS");
	double Min = 2, Max = 4, y, x, tab;
	printf("¬ведите значение шага табул€ции :\n");
	scanf("%lf",&tab);
	printf("\n\t |  x        |   f(x)               |\n");
	printf("\t ------------------------------------\n");

	for (x = Min; x <= Max + tab / 2; x += tab )
	{
		
		printf("\n\t | %lf  |    %-12lf      |\n", x, f(x));
	}
	
	
}


