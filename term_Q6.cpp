//// [과제 06번] 소비자경제학과-2학년-1913455-노승혜
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
//	printf("\n학생데이터 출력 \n");
//	printf("=================\n");
//	for (i = 0; i < count; i++)
//		st_output(st[i]);
//
//	return 0;
//}
//struct STUDENT st_input(void)
//{ 
//		printf("학생 번호를 입력해주세요. ");
//		scanf("%d", &list_in[i].st_no);
//		printf("학생 이름을 입력해주세요. ");
//		scanf("%s", &list_in[i].st_name);
//		printf("학생의 국어 성적을 입력해주세요. ");
//		scanf("%d", &list_in[i].kor);
//		printf("학생의 영어 성적을 입력해주세요. ");
//		scanf("%d", &list_in[i].eng);
//		printf("학생의 수학 성적을 입력해주세요. ");
//		scanf("%d", &list_in[i].mat);
//	return list_in[i];
//}
//void st_output(struct STUDENT st)
//{
//	st.tot = st.kor + st.mat+st.eng;
//	st.avg = (float)st.tot / 3;
//	printf("학생 번호 : %d \n", st.st_no);
//	printf("학생 이름 : %s \n",st.st_name);
//	printf("학생 전체 점수 : %d \n", st.tot);
//	printf("학생 평균 : %.2f \n", st.avg);
//	printf("=================\n");
//}
