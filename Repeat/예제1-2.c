#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;

	for (i = 0;/*�ʱ��*/  i < 3;/*���ǽ�*/  i++/*������*/)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}