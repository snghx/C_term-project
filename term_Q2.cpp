//// [과제 02번] 소비자경제학과-2학년-1913455-노승혜
//#define _CRT_SECURE_NO_WARNINGS  
//#include <stdio.h>
//
//int main(void) {
//	int score[5];
//	int i;
//	for (i = 0; i < 5; i++) {    //학생 점수를 입력받아 배열을 생성하기 위한 for문
//		printf("%d, 학생 점수(0~100)? ", i + 1);
//		scanf("%d", &score[i]);
//	}
//
//	float avg = (float)((score[0] + score[1] + score[2] + score[3] + score[4])) / 5;  //평균값 avg에 저장
//	int max = 0;
//	int min=100;
//
//	for (i = 0; i < 5; i++) {  //최고 점수 구하는 for문
//		if (max < score[i])
//			max = score[i];
//	}
//
//	for (i = 0; i < 5; i++) {  //최저 점수 구하는 for문
//		if (min > score[i])
//			min = score[i];
//	}
//
//	for (i = 0; i < 5; i++)
//		printf("%d, ", score[i]);
//	printf("=> 평균 점수: %.2f\n", avg);
//	printf("최고 점수:%d, 최저 점수:%d\n", max, min);
//}