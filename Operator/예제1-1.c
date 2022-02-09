//산술 연산자 : +(더하기),-(빼기),*(곱하기),/(나누기),%(나머지)
#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a의 값 :%d, b의 값 :%d\n", a, b);
	printf("덧셈 :%d\n", sum);
	printf("뺄셈 :%d\n", sub);
	printf("곱셈 :%d\n", mul);
	printf("a의 음수연산:%d\n", inv);

	return 0;
}
