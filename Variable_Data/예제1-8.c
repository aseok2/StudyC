#include <stdio.h>

int main(void)
{
	int income = 0;					// 소득액 초기화
	double tax;						// 세금
	const double tax_rate = 0.12;	// 세율 초기화      const 를 사용하면 이후에는 값을 바꿀 수 없으므로 반드시 선언과 동시에 초기화 해야 함.

	income = 456;					// 소득액 저장
	tax = income * tax_rate;			// 세금 계산
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}