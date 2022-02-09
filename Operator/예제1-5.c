#include <stdio.h>

 // 관계연산자   -> 대소관계  : <  or  >            
 //                 동등관계  : ==(같다)  !=(같지않다)           ->참이면 1 거짓이면 0

int main(void)
{
	int a = 10, b = 20, c = 10;
	int res;	//결과값을 저장할 변수
				//각각 a,b,c 값을 대입
	res = (a > b);  //10 > 20은 거짓이므로 결과값은 0
	printf("a > b : %d\n", res);
	res = (a >= b);	// 10>=20은 거짓이므로 결과값은 0                무조건 부등호 먼저!!!!! 그리고 이거 순서 바뀌면 안된다 !=도 마찬가지
	printf("a >= b : %d\n", res);
	res = (a < b);  //10 < 20 은 참이므로 결과값은 1
	printf("a < b : %d\n", res);
	res = (a <= b);	//10 <= 20은 참이므로 결과값은 1  
	printf("a <= b : %d\n", res);
	res = (a <= c); //10 <= 10은 참이므로 결과값은 1
	printf("a <= c : %d\n", res);
	res = (a == b); // 10 = 20은 거짓이므로 결과값은 0
	printf("a == b : %d\n", res);
	res = (a != c); // 10 != 10은 거짓이므로 결과값은 0
	printf("a != c : %d\n", res);

	return 0;
}