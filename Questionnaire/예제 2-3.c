#include <Stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)	// rank�� ���� ������ Ȯ��
	{
	case 1 :		// rank�� 1�̸�
		m = 300;	// m = 300�� �����ϰ�
		break;		// ����� ���
	case 2 :
		m = 200;
		break;
	case 3 :
		m = 100;
		break;
	default :		// rank�� ��ġ�ϴ�  case�� ���� ������ 
		m = 10;		// m =10�� �����ϰ�
		break;		// ����� ���
	}
	printf("m : %d\n", m);

	return 0;
}