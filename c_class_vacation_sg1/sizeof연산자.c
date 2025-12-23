#include <stdio.h>

int main(void)
{
	int num1 = 1; //값은 상관 없음
	printf("%zu\n", sizeof(num1)); //값이 4 => 4바이트를 가지고있다 / %d도 괜찮지만 %zu사용
	printf("%zu\n", sizeof(100)); //int(4bite)
	printf("%zu\n", sizeof(3.14)); //double(8bite)
	printf("%zu\n", sizeof(3.14f));//f : float으로 변형
	printf("%zu\n", sizeof(short));
	return 0;

	//sizeof 연산자 : 값을 직접 넣어도 되고, 자료형을 넣어서도 몇바이트인지 확인 가능
}