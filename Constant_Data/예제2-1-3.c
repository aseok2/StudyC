#include <stdio.h>

int main(void)
{
	printf("Be happy\n");      // Be happy 출력하고 줄 바꿈(\n)
	printf("12345678901234567890\n");    // 화면에 열 번호 출력하고 줄 바꿈
	printf("My\tfriend\n");  // my를 출력하고 탭 만큼 이동(\t) 후에 friend 출력하고 줄 바꿈
	printf("Goot\bd\tChance\n"); // t를 d로 바꾸로 탭만큼 이동 후에 Chance 출력하고 줄 바꿈
	printf("Cow\rW\a\n");  // 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄 바꿈

	return 0;

}

/*  \n : 다음 줄로 이동
	\b : 한 칸 왼쪽으로 이동
	\r : 맨 앞으로 이동
	\a : 벨소리
	*/