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

	return temp;	// temp�� ���� ��ȯ�ϴ� �Լ�!!
}

/*int sum(int x, int y)
{
	return x + y;		// �ٷ� �̷������� �Լ��� ���� ���� ����.
}*/