// [���� 05��] �Һ��ڰ����а�-2�г�-1913455-����� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int my_Strcpy(char* str2, char* str1) {
	printf("before str1 : %s, str2 : %s\n", str1, str2);
	
	char temp = NULL;
	while (*str1 != '\0')
	{
		*str2 = *str1;   //str2�� ����� str1�� ���� ����
		*str1++;  //str1�� ����(���ڿ� �迭) 1ĭ�� �̵�
		*str2++;
	}
	return 0;
}

int main(void) {

	char str2[20] = "", str1[20] = "C Language.";
	my_Strcpy(str2, str1);
	printf("after str1 : %s, str2 : %s\n", str1, str2);  //�Լ� ��� ���� ���ڿ� ��ȭ Ȯ��
}