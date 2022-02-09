#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*	void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void)
{
	printf("apple\n");
	fruit();				// 자신을 다시 호출 -> ㅈㄴ게 호출하다가 중간에 끝난다.	
}*/


void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}


void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);

	//printf("jam\n")  : 재귀호출 함수는 최초 호출한 곳이 아니라 이전에 호출했던 곳으로 돌아간다.
}