#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_char(char ch, int count);	// �Լ�����, ��ȯ���� ���� �Լ��� ����� ������ ��ȯ���� void�� ����Ѵ�.

int main(void)
{
	print_char('@', 5);   //print_char�� ��ȯ���� �����Ƿ� ���� ���� ���� �� ����.

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	// if(count > 10) return		���⼭ return�ϸ� �Լ��� ������ �����Ѵ�.
	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return;
}
