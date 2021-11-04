

#include <iostream>
#include <iomanip>
#include <windows.h>
#include <stdio.h>


int main()
{
	int x, a, b, c;
	double F;
	printf("input a\n");
	scanf_s("%i", &a);
	printf("input x\n");
	scanf_s("%i", &x);
	printf("input b\n");
	scanf_s("%i", &b);
	printf("input c\n");
	scanf_s("%i", &c);
	if (x < 0 && b != 0) F = a - x / 10 + b;
	else;
		if (x > 0 && b == 0)F = x - a / x - c;
			else F = 3 * x + 2 / c;
		printf("F:%lf", F);
	
	//ivan tyt dsds

	


}

