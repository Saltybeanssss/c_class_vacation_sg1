#include <stdio.h>	//헤더파일 추가

int main(void)	//main : 주체가 되는 함수 +  void 공간 : 인풋,  void 의미는 넣어주는게 없다 + int는 정수값
{		//기능 담당
	printf("Hello World\n");	//printf : 시각적 확인  + 문자는 ' ', 문장은 " " + \n : 줄바꿈 + \t : tab(줄간격 / 1칸에서 8칸) 
	printf("Today is Monday");
	printf("a\nb\nc\nd\ne\nf\ng\n");
	printf("강아지\t고양이\t토끼\n");
	printf("dog\tcat\trabbit\n");
	printf("12345678\t1234\n");
	printf("강아지는\"멍멍\"고양이는\"야옹\"토끼는 몰라");	 // \" : 텍스트 작용
	return 0;		//return : 아웃풋
}
//콘솔창 : 영어랑 숫자는 80글자, 한글로는 40글자
//컴파일 후 : .c -> .obj -> 실행파일 .exe