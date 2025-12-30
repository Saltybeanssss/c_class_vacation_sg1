#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("셈 기호 선택(+[1], -[2], *[3], /[4]) : ");
	scanf_s("%d", &a);
	printf("계산할 두 정수 입력(공백으로 구분) : ");
	scanf_s("%d %d", &b, &c);

	switch (a) {
		case 1: printf(" 계산결과 : %d", b + c);
			break;
		case 2: printf(" 계산결과 : %d", b - c);
			break;
		case 3: printf(" 계산결과 : %d", b * c);
			break;
		case 4: if (c == 0) printf("0으로 나눌 수 없습니다");
			printf(" 계산결과 : %d\n 나머지 : %d", b / c, b % c);
			break;

		default: printf("ERROR191");
	}
	return 0;
}