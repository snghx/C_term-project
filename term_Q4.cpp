//// [과제 04번] 소비자경제학과-2학년-1913455-노승혜 
//#include <stdio.h>
//
//int main(void) {
//	int data[3][7];
//	int row; //행
//	int col; //열
//	int times = 0; //행렬 생성 시 곱할 값
//	int sum = 0; //각 행의 합 저장할 변수
//	int avg = 0; //각 행의 평균 저장할 변수
//
//	for (row = 0; row <= 2; row++) {       //0~4열 생성(6의 배수를 차레로 대입)
//		for (col = 0; col <= 4; col++) {
//			times++;
//			data[row][col] = 6 * times;
//			sum += data[row][col];
//		}
//		data[row][5] =sum;  //각 행의 합을 sum에 저장 및 5열에 출력
//		data[row][6] = sum / 5;
//		sum = 0;  //sum 변수 0으로 비워두기
//
//	}
//	for (row = 0; row <= 2; row++) {
//		for (col = 0; col <= 6; col++) {
//			if (col == 5)
//				printf("-> %d 행의 합 : %d, ", row, data[row][5]);
//			else if (col == 6)
//				printf("평균 : %d", data[row][6]);
//			else
//				printf("%d ", data[row][col]);
//		}
//		printf("\n");
//	}
//}