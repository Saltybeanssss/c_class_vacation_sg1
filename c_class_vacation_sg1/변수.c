#include <stdio.h>

int main(void)
{
	//한줄 주석
	/*
	여러줄 주석의 기본
	*/

	//printf("hello"); // ctrl + / : 주석 단축키
	
	//변수 선언방법
	//1. 자료형 변수명 = 값;
	int c = 50;

	//2. 자료형 변수명A;
	//변수명A = 값;
	int num2;
	num2 = 2;	//초기화 과정
	num2 = 5;	//따라서 2는 사라짐

	printf("answer = %d",num2);

	//3. 동시에
	int number1, number2;
	number1 = 10;
	number2 = 20;

	//4. 
	int number3 = 40, number = 40;

	//규칙
	//- 1 : 변수의 이름은 알파벳 숫자 언더바로만 구성할 수잇다.
	//- 2 : 변수의 이름은 숫자로 시작할 수 없다. ( 첫 글자는 영어로 보통 시작한다.)
	//- 3 : 변수의 이름은 공백을 포함할 수 없다.
	//- 4 : c언어는 알파벳 대소문자 구분을 해야한다.
	//- 5 : 예약어를 사용할 수 없다.
	////가능한 변수명
	//int x = 10;
	//int number8 = 8;
	//int number_05 = 5;
	//int Number = 15;
	//// 불가능한 변수명
	//int hello world = 1;
	//int hello#@ = 1;
	//int 100number = 1;
	//int return = 1;

	return 0;
}