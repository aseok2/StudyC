#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;

	for (i = 0;/*초기식*/  i < 3;/*조건식*/  i++/*증감식*/)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}