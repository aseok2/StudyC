#include <stdio.h>

int main(void)
{
	printf("Be happy\n");      // Be happy ����ϰ� �� �ٲ�(\n)
	printf("12345678901234567890\n");    // ȭ�鿡 �� ��ȣ ����ϰ� �� �ٲ�
	printf("My\tfriend\n");  // my�� ����ϰ� �� ��ŭ �̵�(\t) �Ŀ� friend ����ϰ� �� �ٲ�
	printf("Goot\bd\tChance\n"); // t�� d�� �ٲٷ� �Ǹ�ŭ �̵� �Ŀ� Chance ����ϰ� �� �ٲ�
	printf("Cow\rW\a\n");  // �� ������ �̵�(\r)�� C�� W�� �ٲٰ� ���Ҹ�(\a)�� ���� �� �ٲ�

	return 0;

}

/*  \n : ���� �ٷ� �̵�
	\b : �� ĭ �������� �̵�
	\r : �� ������ �̵�
	\a : ���Ҹ�
	*/