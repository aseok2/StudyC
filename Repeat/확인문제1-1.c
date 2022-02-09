#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = -3 ;

		do
		{
			scanf("%d",&a);
		} while (a < 0);

		printf("%d", a);

		return 0;
}