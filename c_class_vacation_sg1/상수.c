#include <stdio.h>
#define PI = 3.14 //*
int main(void)
{
	//상수 : 변하지 않는 값
	printf("%d\n", 10); //리터럴 상수: 그냥 값 그 자체

	//심볼릭 상수 : 상수값 대신 변수처럼 사용가능하게 이름을 붙인 상수(핸드폰에 기록해둔 느낌) - 가장많이 쓰임
	const int MYCONST = 85; //심볼릭 상수는 주로 대문자로 작성
	const int YOURCONST; //상수는 선언과 초기화가 동시에 이루어져야함(C기준) -> 컴파일러나 다른프로그램에 따라 달라짐 그러나 이 상수는 무쓸모

	//매크로 상수 : 심볼릭 상수의 일종(종이에 기록한 느낌)
	//*

	const char* FRIEND_HOME = "서울시 강남구 태헤란로 123"; //포인터 변수 덕분에 가능
	printf("약속 장소 : %s\n", FRIEND_HOME);
	return 0;
}