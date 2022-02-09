#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(double x, double y);


int main(void)
{
	double res;
	res = average(1.5, 3.4);
	printf("res : %.2lf", res);
}

double average(double x, double y)
{
	return (x + y) / 2;
}