#include <stdio.h>

int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate;

	rate = (double)audience / (double)seats * 100;
	printf("입장률 : %.1lf %% \n", rate);  //% 출력할 떄는 두개 써줘야한다.

}