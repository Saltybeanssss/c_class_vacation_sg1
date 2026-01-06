#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//7번 시도함
	//사용자에게 입력받을 숫자를 넣을 변수 생성 
	//랜덤 숫자 넣을 변수 생성
	//일반아이템 뽑은 개수 int ~ = 0;
	//"

	//레전드 아이템 뽑았다면 종료함
	//1을 입력하면 뽑기 시작
	//랜덤숫자는 1~100
	//일반 아이템 확률은 50
	//레어는 30
	//에픽은 15
	//레전드는 5
	//뽑을 때마다 현재 결과 알려주기 (현재결과 - 일반 : , 레어 : , 에픽 : , 레전드 : )
	//최종결과로 다 보여주기 그동안 얻은 아이템들

	int numuser, random = 0, common = 0, rare = 0, epic = 0, legend = 0, chance = 7;
	while (1) {
		srand((unsigned)time(NULL));
		random = rand() % 100 + 1;
		printf("아이템 뽑기(숫자1 입력시 시작) : ");
		scanf_s("%d", &numuser);
		if (numuser != 1) continue;
		if (random >= 1 && random <= 50) {
			common++;
			chance--;
			printf("현재 결과 -> 일반 : %d , 레어 : %d, 에픽 : %d, 레전드 : %d (남은기회 : %d)\n\n", common, rare, epic, legend, chance);
		}
		else if (random <= 80) {
			rare++;
			chance--;
			printf("현재 결과 -> 일반 : %d , 레어 : %d, 에픽 : %d, 레전드 : %d (남은기회 : %d)\n\n", common, rare, epic, legend, chance);
		}
		else if (random <= 95) {
			epic++;
			chance--;
			printf("현재 결과 -> 일반 : %d , 레어 : %d, 에픽 : %d, 레전드 : %d (남은기회 : %d)\n\n", common, rare, epic, legend, chance);
		}
		else {
			legend++;
			chance--;
			printf("레전드 무기 획득! 목표달성!\n\n");
			printf("- 최종결과\n일반 : %d\n레어 : %d\n에픽 : %d\n레전드 : %d", common, rare, epic, legend);
			return 0;
		}
		if (chance == 0) {
			printf("== 최종결과 ==\n일반 : %d\n레어 : %d\n에픽 : %d\n레전드 : %d",common,rare,epic,legend);
			return 0;
		}
	}
	return 0;
}