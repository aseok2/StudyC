#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int j;
	for (i = 0; i < 5; i++)
	{
		for(j=0; j<5; j++)
		{
			if ((i + j) == 4 )
			{
				printf("*");
			}
			else if (i == j)
			{
				printf("*");
			}
			else  { printf(" "); }

		}
		printf("\n");
	}

	return 0;
}