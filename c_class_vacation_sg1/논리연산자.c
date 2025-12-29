#include <stdio.h>

int main(void)
{
	//논리 연산자
	//&&(and) : 피연산자 중 하나만 true라면 false를 반환 => *모두 true여야 true
	//||(or) : 피연산자 중 하나만 true이면 true를 반환
	//!(not) : 피연산자의 값이 true라면 false로 뒤집는다
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	printf("%d\n", result);

	result = one <= two && two <= three && three <= four;
	printf("%d\n", result);

	result = !(one > two);
	printf("%d\n", result);

	return 0;
}