#include <stdio.h>

int main(void)
{
	// scanf_s 사용시 주의점 
	// 1. 입력받을 데이터의 자료형에 대응하는 형식문자 필요
	// 2. 입력받은 데이터를 저장할 메모리 공간(변수)
	// 3. scanf -> scanf_s
	// 4. 뒤에다가 & 사용해야함
	// 5. \n 같은 것들은 출력에서만 사용
	// 6. 입력 상태에서 출력은 안됨 ex)scanf_s("입력 : %d",num);

	//int num;
	//scanf_s("%d", &num);
	//printf("%d", num);
	
	//문제
	//int num2, num3;

	//scanf_s("%d# %d# %d", &num, &num2, &num3); //#사용시 한번에 가능
	//
	//int t = num + num2 + num3;
	//printf("%d",t);
	
	//문제(실수)
	//float a;

	//scanf_s("%f", &a);
	//printf("%0.2f", a);
	
	//문제
	float b;
	scanf_s("%f", &b);
	printf("%0.3f", b);
	return 0;
}