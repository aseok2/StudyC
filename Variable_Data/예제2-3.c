#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade;					//������ �Է��� ����
	char name[20];				//�̸��� �Է��� ����

	printf("�����Է� :");		
	scanf("%c", &grade);		//grade ������ ���� ���� �Է�
	printf("�̸��Է� :");
	scanf("%s", name);			//name �迭�� �̸� ���ڿ� �Է�, &�� ������� �ʴ´�.
	printf("%s�� ������ %d�Դϴ�.\n", name, grade);

	return 0;
}