#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double weight, height;
	double bmi;


	printf("������(kg)�� Ű(cm)�Է� : ");
	scanf(" % .1lf % .1lf", &weight, &height);
	bmi = (weight) / (height*height);
	printf("%s", (bmi > 20 && bmi < 25) ? "ǥ���Դϴ�" : "ü�߰����� �ʿ��մϴ�");

	return 0;
}