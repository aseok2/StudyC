#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, tot;
	double avg;
	printf("�� ������ ���� : ");
	scanf("%d %d", &a, &b);  //���� �Է�
	tot = a + b;			 // �� ������ ���� ������ ���Ѵ�.
	avg = tot / 2.0;
	// ��� ���, TOT�� �������̺�� ������ ���� 2.0�� ���� �Ǽ������� ����ؾ� �Ѵ�.
	// �׷��� ������ �ǿ����ڰ� ��� ���� ���̹Ƿ� ������ ���� ����Ѵ�.


	printf("��� : %.1lf\n", avg);

	return 0;
}