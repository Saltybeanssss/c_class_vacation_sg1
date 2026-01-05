#include <stdio.h>

int main(void)
{
	//초기잔액설정
	//메뉴 / 얼마입출금할지 담을 변수

	//while 무한반복을 사용
	// if 사용

	int a = 12000, b, d = 0;

	while (1) {
		printf("== ATM ==\n1.잔액조회\n2.입금\n3.출금\n4.종료\n메뉴선택 : ");
		scanf_s("%d", &b);
		
		if (b < 1 || b > 4) {
			printf("잘못된 선택입니다\n\n");
			continue;
		}
		
		if (b == 1) {
			printf("현재 남은 잔액은 %d원 입니다\n\n", a);
		}
		else if (b == 2) {
			printf("입금할 금액을 입력하세요 : ");
			scanf_s("%d", &d);
			if (d <= 0) {
				printf("잘못된 금액을 입력했습니다 다시 시도해주세요\n\n");
				continue;
			}
			printf("입금이 완료 되었습니다\n\n");
			a += d;
		}
		else if (b == 3) {
			printf("출금할 금액을 입력하세요 : ");
			scanf_s("%d", &d);
			if (d <= 0) {
				printf("잘못된 금액을 입력했습니다 다시 시도해주세요\n\n");
				continue;
			}
			if (d > a) {
				printf("잔액이 부족합니다.\n\n");
				continue;
			}
			printf("출금이 완료되었습니다\n\n");
			a -= d;
		}
		else if (b == 4) {
			printf("사용이 종료되었습니다\n\n");
			break;
		}
	}
	return 0;
}