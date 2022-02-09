#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_char(char ch, int count);	// 함수선언, 반환값이 없는 함수는 선언과 정의의 반환형에 void를 사용한다.

int main(void)
{
	print_char('@', 5);   //print_char는 반환값이 없으므로 숫자 등을 더할 수 없다.

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	// if(count > 10) return		여기서 return하면 함수의 실행을 종료한다.
	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return;
}
