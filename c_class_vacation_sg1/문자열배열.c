#include <stdio.h>
#include <string.h>

int main(void)
{
	char string_text[] = "안녕하세요!";
	printf("string_text의 길이는 %zd\n", sizeof(string_text)); // = 12 -> 한글이 2자리씩 느낌표 한자리 뒤에 널하나

	char long_text[50] = "This is long";
	printf("long_text의 길이는 %zd\n", sizeof(long_text)); //%zd or %zu
	printf("long_text의 콘텐츠 길이는 %zd\n", strlen(long_text)); //%d도 가능 그러면 (int)strlen(long_text)
	printf("%s\n", long_text);

	char question[30] = "My name is\0 은지"; // or question[10] = '\n' -> 특수형태 대입시 작은 따옴표
	printf("%s\n",question);

}