#include <stdio.h>

int main(void)
{
	/*int a = 10;*/ // 한개의 값만 가능
	// 배열은 다수의 데이터 저장 가능
	// 배열의 자료형 int, 배열의 이름 numbers, 배열의 길이 5

	//int numbers[5] = { 10, 20, 30, 40, 50 };
	//numbers[0] = 125; // 수정

	//printf(" ");

	//for (int i = 0; i < 5; i++) {
	//	printf("%d", numbers[i]);
	//}
        int a[5];
        int max;

        for (int i = 0; i < 5; i++) {
            scanf_s("%d", &a[i]);   // 배열 값 입력
            printf("%d\n", a[i]);    // 입력한 값 출력
        }

        max = a[0];  // 처음 값을 최대값으로 초기화

        for (int i = 1; i < 5; i++) {   // 1번 인덱스부터 비교
            if (a[i] > max) {           // 현재 값이 max보다 크면
                max = a[i];             // max를 업데이트
            }
        }

        printf("최댓값: %d\n", max);    // 최댓값 출력

        return 0;
    }


	
	return 0;
}