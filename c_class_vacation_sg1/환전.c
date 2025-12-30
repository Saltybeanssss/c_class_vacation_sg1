#include <stdio.h>

int main(void)
{
	// 문제 : 환전할 금액을 우선 입력
	// 달러로 환전할 것인가(1USD = 1443원)
	// 엔화로 환전할 것인가(1JPY = 9원)
	// 캐나다달러로 환전할 것인가(1CAD = 1053원)
	// 어떤 화폐로 할지 임시변수

	int menu;
	double d, y, c, cost;
	printf("환전할 금액을 입력하시오 : ");
	scanf_s("%lf", &cost);
	printf(" 1. 달러로 환전할 것인가(1USD = 1443원)\n 2. 엔화로 환전할 것인가(1JPY = 9원)\n 3. 캐나다달러로 환전할 것인가(1CAD = 1053원)\n");
	printf("=> ");
	scanf_s("%d", &menu);

	switch (menu) {
		case 1: d = cost / 1443, printf("달러로 환전(1USD = 1443원) : %.2lf달러",d);
			break;
		case 2: y = cost / 9, printf("엔화로 환전(1JPY = 9원) : %.2lf엔",y);
			break;
		case 3: c = cost / 1053, printf("캐나다달러로 환전(1CAD = 1053원) : %.2lf캐나다달러",c);
			break;

		default: printf("ERROR101");
	}
	return 0;
}