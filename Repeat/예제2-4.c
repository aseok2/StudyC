#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int count = 0;
	while(1)  // ���⼭�� 1 �� ���� ��Ÿ���� for ���� ��� ;;�� ����Ѵ�.
	{
		printf("Be happy\n");
		count += 1;
		if (count == 5) break;
	}

	return 0;
}