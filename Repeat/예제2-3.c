#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 11; i++)
	{
		sum += i;
		if (sum > 30) break;  //break는 자신이 속한 반복문 하나만 벗어난다.
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d", i);

	return 0;
}