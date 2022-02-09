#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;   //전위형 증감연산자
	post = (b++) * 3;  //후위형 증감연산자    -> 다른 연산자와 함께 사용될 때 가장 나중에 연산된다.

	printf("초깃값 a=%d, b=%d\n", a, b);
	printf("전위형 :(++a)*3 = %d, 후위형 : (b++)*3 = %d", pre, post);

	return 0;

}
