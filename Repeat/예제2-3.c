#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 11; i++)
	{
		sum += i;
		if (sum > 30) break;  //break�� �ڽ��� ���� �ݺ��� �ϳ��� �����.
	}
	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d", i);

	return 0;
}