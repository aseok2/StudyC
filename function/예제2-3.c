#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_line(void); // �Լ�����

int main(void)
{
	print_line();
	printf("�й�	�̸�	����	����\n");
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
// return ���� �ʿ䰡 ����.
