#include <stdio.h>

int main(void)
{
	//삼항조건연산자 : 조건식?맞으면 :출력 (true) / 틀리면 ;출력(false)

	int ten = 10, twenty = 20;
	int max;
	max = ten > twenty ? ten : twenty;

	printf("max에 들어갈 값 : %d\n", max);

	//문제1 : 나이를 입력받아서 미성년자인지 판별하기
	//int a;
	//scanf_s("%d", &a);

	//int result1 = a >= 19 ? 1 : 0;
	//printf("결과 : %d", result1);

	//문제2 : 사용자가 20살 이상이면 지하철 요금은 1280원 20살 미만이라면 800원
	/*int b;
	scanf_s("%d", &b);

	int result2 = b >= 20 ? 1280 : 800 ;
	printf("%d세의 지하철 요금은 %d원입니다", b, result2);*/

	//문제3 : 사용자에게 숫자를 입력받아서 그 숫자가 짝수라면 0을 출력하고 홀수라면 1을 출력
	//출력 : 입력하신 숫자는 **이며, 결과 : 0 or 1
	/*int c;
	scanf_s("%d", &c);

	int result3 = c % 2 == 0 ? 0 : 1; 
	printf("입력하신 숫자는 %d이며, 결과 : %d", c, result3);*/

	//문제4
	/*int s = 85;
	char grade = s >= 90 ? 'A' : s >= 80 ? 'B' : s >= 70 ? 'C' : 'D';

	printf("%c\n", grade);*/

	return 0;
}