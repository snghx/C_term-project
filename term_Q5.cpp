// [과제 05번] 소비자경제학과-2학년-1913455-노승혜 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int my_Strcpy(char* str2, char* str1) {
	printf("before str1 : %s, str2 : %s\n", str1, str2);
	
	char temp = NULL;
	while (*str1 != '\0')
	{
		*str2 = *str1;   //str2의 내용과 str1의 내용 동일
		*str1++;  //str1의 내용(문자열 배열) 1칸씩 이동
		*str2++;
	}
	return 0;
}

int main(void) {

	char str2[20] = "", str1[20] = "C Language.";
	my_Strcpy(str2, str1);
	printf("after str1 : %s, str2 : %s\n", str1, str2);  //함수 출력 이후 문자열 변화 확인
}