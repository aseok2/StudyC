#include <stdio.h>

int main(void)
{
	int a = -1, b = 0;

	if (a > 0)
	{
		printf("b�� 1�� �����մϴ�.\n");
		b = 1;
	}
	else if (a == 0)
	{
		printf("b�� 2�� �����մϴ�.\n");
		b = 2;
	}
	else
	{
		printf("b�� 3�� �����մϴ�.\n");
		b = 3;
	}
	printf("b : %d\n", b);

	return 0;
}