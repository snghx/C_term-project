//// [과제 01번] 소비자경제학과-2학년-1913455-노승혜
//#define _CRT_SECURE_NO_WARNINGS  
//#include <stdio.h>
//
//int main(void) {
//	int date, report, mid, fin =0;
//	printf("출석일수? ");
//	scanf("%d", &date);
//	printf("레포트 점수? (0~100) ");
//	scanf("%d", &report);
//	printf("중간고사? (0~100) ");
//	scanf("%d", &mid);
//	printf("기말고사? (0~100) ");
//	scanf("%d", &fin);
//	printf("\n");
//
//	if (date < 5)
//		date = 0;
//	else if ((5 <= date) && (date <= 10))
//		date = 5;
//	else
//		date = 10;
//
//	printf("백분율이 반영된 각각의 성적 \n");
//	printf("레포트 점수: %.2f\n", report*0.2);
//	printf("중간고사 점수: %.2f\n", mid*0.3);
//	printf("기말고사 점수: %.2f\n", fin*0.4);
//	printf("출결 점수: %d\n\n", date);
//	printf("최종성적: %.2f\n", report*0.2+mid*0.3+fin*0.4+date);
//}