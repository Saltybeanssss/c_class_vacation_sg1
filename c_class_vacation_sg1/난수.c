#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//int random;

	//srand((unsigned)time(NULL)); //unsigned쓰는 이유 : 시간은 음수가 아님
	//random = rand()%100+1; //0,1,2 -> 1,2,3
	//printf("%d", random);

	int com,a;
	
	while (1) {
		srand((unsigned)time(NULL));
		com = rand() % 3 + 1;
		printf("가위바위보(1-가위, 2-바위,3-보,4-종료) : ");
		scanf_s("%d", &a);

		
		switch (a) {
			case 1: printf("You : 가위를 냈다\n");
				break;
			case 2: printf("You : 바위를 냈다\n");
				break;
			case 3: printf("You : 보를 냈다\n");
				break;
			case 4: printf("종료합니다");
				return 0;

			default:printf("잘못된 값을 냈다");
				return 0;
		}
		switch (com) {
			case 1: printf("com : 가위를 냈다\n");
				break;
			case 2: printf("com : 바위를 냈다\n");
				break;
			case 3: printf("com : 보를 냈다\n");
				break;
		}

		if (a == com) printf("결과 비겼다\n");
		if ((a == 1 && com == 3) || (a == 2 && com == 1) || (a == 3 && com == 2)) {
			printf("결과 : 승리\n");
		}
		else {
			printf("결과 : 패배\n");
		}
	}

	return 0;
}