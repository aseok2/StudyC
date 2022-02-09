#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int count = 0;
	while(1)  // 여기서의 1 은 참을 나타내고 for 문의 경우 ;;을 사용한다.
	{
		printf("Be happy\n");
		count += 1;
		if (count == 5) break;
	}

	return 0;
}