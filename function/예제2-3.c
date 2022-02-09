#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_line(void); // 함수선언

int main(void)
{
	print_line();
	printf("학번	이름	전공	학점\n");
	print_line();
}

void print_line(void)
{
	int i;
	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}
// return 문이 필요가 없다.
