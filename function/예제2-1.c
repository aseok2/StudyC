#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 매개변수가 없는 함수
int get_num(void);

int main(void)
{
	int result;

	result = get_num();			//void는 함수 정의나 선언에서 사용하고, 호출할 떄는 쓰지 않는다.
	printf("반환값 : %d\n", result);
	return 0;
}

int get_num(void)
{
	int num;

	printf("양수입력 : ");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("양수를 입력하세요\n");
		printf("양수입력 :");
		scanf("%d", &num);
	}
	return num;
}