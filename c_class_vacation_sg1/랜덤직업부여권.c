#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
	//닉네임 입력받기
	//스위치로 직업 부여하기 3개
	//***님 당신의 직업은 ***입니다
	
	int j;
	char name[20];
	char job[30];
	printf("아이디를 입력하세요 : ");
	scanf_s("%s", name, (unsigned)sizeof(name));
	srand((unsigned)time(NULL));
	j = rand() % 3 + 1;

	switch (j) {
		case 1: printf("%s님 당신의 직업은 전사입니다.",name);
			break;
		case 2: printf("%s님 당신의 직업은 마법사입니다.", name);
			break;
		case 3: printf("%s님 당신의 직업은 궁수입니다.", name);
			break;
	}
	return 0;
}