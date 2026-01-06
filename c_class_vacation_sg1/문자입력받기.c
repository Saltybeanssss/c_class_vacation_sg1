#include <stdio.h>

int main(void)
{
	//문자 입력받을 공간 확보
	//char scanf_string[50];

	//scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string)); // sizeof가 양수밖에 안됨 - unsigned / int는 변하지 않는 정수로

	//printf("%s\n", scanf_string); //공백입력하면 끊김

	char str[50];
	fgets(str, sizeof(str), stdin); //standard input : 표준 입력
	printf("입력된 문자열 %s", str);
	return 0;
}