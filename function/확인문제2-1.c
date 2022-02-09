#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x);

int main(void)
{
	sum(10);
	sum(100);
	return 0;
}

int sum(int x)
{
	int num =0 ;
	int i;

	for (i= 1; i < x+1; i++)
	{
		num = num+i;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n",x, num);

	return num;

}