#include <stdio.h>

int main(void)
{
	//연산자의 종류
	//산술연산자, 대입연산자, 비교연산자, 복합대입연산자, 증강연산자, 논리연산자, 상황조건연산자

	//산술연산자(이형연산자)
	// 피연산자 : 연산되는 숫자들
	//+, -, *, [/], %, %%(문자로 표현하고싶을때,%d같은 것과 같이 쓸때) + 팁 : ctrl + d(바로 아래 복사)

	/*int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", a / b);*/

	//int + int = int 
	//int + float = float
	//int + char = int(int > char)
	//char + char = char
	//char + float = float
	//float + float = float

	/*int num1 = 1;
	float num2 = 1.2f;
	printf("%d + %.1f = %.1f", num1, num2, num1 + num2);*/

	/*int num = -6*/

	//대입연산자(이형연산자)
	//오른쪽에 있는 값을 연산자 왼쪽에 있는 변수에 대입


	//복합대입연산자
	//a+=b -> a = a+b
	//a-=b -> a = a-b
	//a*=b -> a = a*b
	//a/=b -> a = a/b
	//a%=b -> a = a%b
	
	/*int x = 3;
	int y = 4;
	int result = x += y;
	printf("%d\n", result);

	y *= 4;
	printf("%d", y);*/

	//비교 연산자
	//a>b
	//a<b
	//a>=b
	//a<=b
	//a==b
	//a != b(정말 다른지 검사하는게 아닌 뒤집는 연산자)
	//true : 1, false : 0

	/*int a = 1;
	int b = 10;

	printf("a > b = %d\n", a > b);
	printf("a == b = %d\n", a == b);
	printf("a != b = %d", a != b);*/

	//증감연산자(단항연산자, 피연산자가 하나면 됨)
	//숫자형 데이터를 1씩 증가시키거나 감소시킴
	//변수-- 또는 --변수
	//변수++ 또는 ++변수
	//*int a = ++b : 먼저 증가연산이 실행된 후 증가된 b의 값을 a에 대입
	//*int a = b++ : b의 값을 먼저 대입한 후 b의 증가가 실행됨

	//int a = 10;
	//int b = 20;
	//printf("A = %d\n", a);
	//printf("A = %d\n", a++);
	//printf("A = %d\n", ++a);

	//printf("A = %d\n", a);
	//printf("A = %d\n", a++); //그냥 a가 먼저
	//printf("A = %d\n", a);

	//printf("B = %d\n", b);
	//printf("B = %d\n", ++b); //++b가 먼저
	//printf("B = %d\n", b);

	//연산자 우선순위
	//수학 기호 순서 

	//문제
	//국어 68, 영어 75, 수학 88, 사회 60, 과학 96
	//실수형으로 소수점 한자리까지 평균 출력하기

	int a = 68;
	int b = 75;
	int c = 88;
	int d = 60;
	int e = 96;
	//float total = a+b+c+d+e;
	int total = a + b + c + d + e;
	//float avg = total / 5;
	//float avg = total / 5.0f; (int total)
	float avg = (float)total / 5;

	printf("짱구의 평균은 %0.1f점입니다.", avg);
}