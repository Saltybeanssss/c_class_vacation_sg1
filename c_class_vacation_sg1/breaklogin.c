#include <stdio.h>

int main(void) {
	
	int a = 2626, b, c, d = 12345, e = 0;
	printf("아이디를 입력하세요 : ");
	scanf_s("%d", &b);
	printf("비밀번호를 입력하세요 : ");
	scanf_s("%d", &c);
	while (e < 3) {
		if (a == b && c == d) {
			printf("로그인 성공");
			break;
		}
		else {
			printf("로그인 실패 다시 입력해주세요 (남은 횟수 : %d)\n",2 - e);
			e++;
			printf("아이디를 입력하세요 : ");
			scanf_s("%d", &b);
			printf("비밀번호를 입력하세요 : ");
			scanf_s("%d", &c);
		}
	}
	if (e == 3) {
		printf("3회 실패 접근 차단");
	}
	
	return 0;
}