//// [���� 02��] �Һ��ڰ����а�-2�г�-1913455-�����
//#define _CRT_SECURE_NO_WARNINGS  
//#include <stdio.h>
//
//int main(void) {
//	int score[5];
//	int i;
//	for (i = 0; i < 5; i++) {    //�л� ������ �Է¹޾� �迭�� �����ϱ� ���� for��
//		printf("%d, �л� ����(0~100)? ", i + 1);
//		scanf("%d", &score[i]);
//	}
//
//	float avg = (float)((score[0] + score[1] + score[2] + score[3] + score[4])) / 5;  //��հ� avg�� ����
//	int max = 0;
//	int min=100;
//
//	for (i = 0; i < 5; i++) {  //�ְ� ���� ���ϴ� for��
//		if (max < score[i])
//			max = score[i];
//	}
//
//	for (i = 0; i < 5; i++) {  //���� ���� ���ϴ� for��
//		if (min > score[i])
//			min = score[i];
//	}
//
//	for (i = 0; i < 5; i++)
//		printf("%d, ", score[i]);
//	printf("=> ��� ����: %.2f\n", avg);
//	printf("�ְ� ����:%d, ���� ����:%d\n", max, min);
//}