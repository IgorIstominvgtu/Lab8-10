#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#include <locale.h>
#define Row 9
#define COL 9
void main()
{
	int row, col;
	printf("\n");
	for (row = 1; row <= Row; ++row)
	{
		for (col = 1; col <= COL; col++)
			printf("%5d", col * row);
		printf("\n");
	}
	system("pause");
}
