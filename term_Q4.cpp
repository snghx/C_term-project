//// [���� 04��] �Һ��ڰ����а�-2�г�-1913455-����� 
//#include <stdio.h>
//
//int main(void) {
//	int data[3][7];
//	int row; //��
//	int col; //��
//	int times = 0; //��� ���� �� ���� ��
//	int sum = 0; //�� ���� �� ������ ����
//	int avg = 0; //�� ���� ��� ������ ����
//
//	for (row = 0; row <= 2; row++) {       //0~4�� ����(6�� ����� ������ ����)
//		for (col = 0; col <= 4; col++) {
//			times++;
//			data[row][col] = 6 * times;
//			sum += data[row][col];
//		}
//		data[row][5] =sum;  //�� ���� ���� sum�� ���� �� 5���� ���
//		data[row][6] = sum / 5;
//		sum = 0;  //sum ���� 0���� ����α�
//
//	}
//	for (row = 0; row <= 2; row++) {
//		for (col = 0; col <= 6; col++) {
//			if (col == 5)
//				printf("-> %d ���� �� : %d, ", row, data[row][5]);
//			else if (col == 6)
//				printf("��� : %d", data[row][6]);
//			else
//				printf("%d ", data[row][col]);
//		}
//		printf("\n");
//	}
//}