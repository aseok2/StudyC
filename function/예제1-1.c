#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x, int y);

int main(void)
{
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y)
{
	int temp;
	temp = x + y;

	return temp;	// temp의 값을 반환하는 함수!!
}

/*int sum(int x, int y)
{
	return x + y;		// 바로 이런식으로 함수를 만들 수도 있음.
}*/