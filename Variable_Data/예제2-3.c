#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade;					//학점을 입력할 변수
	char name[20];				//이름을 입력할 변수

	printf("학점입력 :");		
	scanf("%c", &grade);		//grade 변수에 학점 문자 입력
	printf("이름입력 :");
	scanf("%s", name);			//name 배열에 이름 문자열 입력, &를 사용하지 않는다.
	printf("%s의 학점은 %d입니다.\n", name, grade);

	return 0;
}