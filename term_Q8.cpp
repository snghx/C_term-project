// [과제 08번] 소비자경제학과-2학년-1913455-노승혜
#include <stdio.h>

void swap(struct STUDENT* st1, struct STUDENT* st2);
struct STUDENT {
	int st_no;
	char st_name[20];
	int kor;
	int eng;
	int mat;
	int tot;
	float avg;
};
int main()
{
	struct STUDENT st1 = { 1001, "IT ",77,43,77 }, st2 = { 1002, "CS",15,49,97 };
	swap(&st1, &st2);
	printf("St1 : %d, %s, %d, %d, %d, %d, %.2f\n", st1.st_no, st1.st_name, st1.kor, st1.eng, st1.mat, st1.tot, st1.avg);
	printf("St2 : %d, %s, %d, %d, %d, %d, %.2f\n", st2.st_no, st2.st_name, st2.kor, st2.eng, st2.mat, st2.tot, st2.avg);
}

void swap(struct STUDENT *st1, struct STUDENT *st2) {

	st1->tot = (st1->kor + st1->eng + st1->mat);
	st1->avg = (float)st1->tot / 3;
	st2->tot = (st2->kor + st2->eng + st2->mat);
	st2->avg = (float)st2->tot / 3;

	struct STUDENT temp = *st1;
	*st1 = *st2;
	*st2 = temp;
}
