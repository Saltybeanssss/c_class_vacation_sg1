#include <stdio.h>

int main(void)
{
	/*for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}*/

	for (int i = 5; i >= 1; i--) {
		for (int j = i; j >= 1; j--) { //역으로 증가하는것도 가능
			printf("*");
		}
		printf("\n");
	}

	return 0;
}