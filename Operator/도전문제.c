#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double weight, height;
	double bmi;


	printf("몸무게(kg)와 키(cm)입력 : ");
	scanf(" % .1lf % .1lf", &weight, &height);
	bmi = (weight) / (height*height);
	printf("%s", (bmi > 20 && bmi < 25) ? "표준입니다" : "체중관리가 필요합니다");

	return 0;
}