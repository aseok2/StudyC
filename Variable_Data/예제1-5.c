#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;	//유효 숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;	//실수형은 꼭 필요한 경우에만 사용하는데, 유효숫자가 많은 double형이 기본이다.

	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20lf\n", db);  

	return 0;


}