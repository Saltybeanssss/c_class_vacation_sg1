#include <stdio.h>

int main(void)
{
	char key;
	int x = 0;

	while (1) {
		printf("\n현재위치 : %d\n", x);
		printf("a : 왼쪽으로 1칸 / d : 오른쪽으로 1칸 / q : 종료\n");
		printf("입력 : ");
		scanf_s(" %c", &key, 1);
		switch (key) {
			case 'a': x += 1;
				break;
			case 'd': x -= 1;
				break;
			case 'q': return 0;
			
			default: printf("잘못된 입력");
		}
	}
	return 0;
}