//// [���� 06��] �Һ��ڰ����а�-2�г�-1913455-�����
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <string.h>
//#define MAX 3
//struct STUDENT {
//	int st_no;
//	char st_name[20];
//	int kor;
//	int eng;
//	int mat;
//	int tot;
//	float avg;
//};
//struct STUDENT list_in[MAX];
//struct STUDENT* list_arr = list_in;
//int i;
//struct STUDENT st_input(void);
//void st_output(struct STUDENT st);
//int main(void)
//{
//	struct STUDENT st[MAX];
//	int i, count;
//	for (i = 0; i < MAX; i++)
//	{
//		st[i] = st_input();
//		if (st[i].st_no == 0)
//			break;
//	}
//	count = i;
//
//	printf("\n�л������� ��� \n");
//	printf("=================\n");
//	for (i = 0; i < count; i++)
//		st_output(st[i]);
//
//	return 0;
//}
//struct STUDENT st_input(void)
//{ 
//		printf("�л� ��ȣ�� �Է����ּ���. ");
//		scanf("%d", &list_in[i].st_no);
//		printf("�л� �̸��� �Է����ּ���. ");
//		scanf("%s", &list_in[i].st_name);
//		printf("�л��� ���� ������ �Է����ּ���. ");
//		scanf("%d", &list_in[i].kor);
//		printf("�л��� ���� ������ �Է����ּ���. ");
//		scanf("%d", &list_in[i].eng);
//		printf("�л��� ���� ������ �Է����ּ���. ");
//		scanf("%d", &list_in[i].mat);
//	return list_in[i];
//}
//void st_output(struct STUDENT st)
//{
//	st.tot = st.kor + st.mat+st.eng;
//	st.avg = (float)st.tot / 3;
//	printf("�л� ��ȣ : %d \n", st.st_no);
//	printf("�л� �̸� : %s \n",st.st_name);
//	printf("�л� ��ü ���� : %d \n", st.tot);
//	printf("�л� ��� : %.2f \n", st.avg);
//	printf("=================\n");
//}
