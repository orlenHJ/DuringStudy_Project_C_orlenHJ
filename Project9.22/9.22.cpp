#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#define _CRT_SECURE_NO_WARININGS
#pragma warning( disable : 4996 )

int main() {

	srand(time(0));
	int a = rand() % 24;//������һ������
	int b = rand() % 60;
	int c = rand() % 60;
	printf("��ʮ��Сʱ�� %d:%d:%d\n", a, b, c);
	if ( (a > 12 && a!=24) || (a == 12 && b > 0)) {
		printf("ʱ��Ϊ PM %d:%d:%d\n", a-12, b, c);
	}
	else if((a<=12) ||(a == 24 && b>0)) {
		printf("ʱ��Ϊ AM %d:%d:%d\n", a, b, c);
	}



	getchar();
	return 0;


}