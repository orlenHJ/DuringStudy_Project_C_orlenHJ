#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>
#pragma warning(disable:4996) //���C6031����Ĵ���


int main() {
	int a ;
	int b ;
	int c ;
	int k = 0;
	int l = 0;
	printf("��ֱ��������������գ�\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("��һ����ʽ��%d/%d/%d \n", a, b, c);
	printf("�ڶ�����ʽ��%d��%d��%d�� \n", a, b, c);

	k = b < 10 ? 1 : 2;//�����Ҽ�
	l = c < 10 ? 5 : 10;
	switch (k + l) {
	case 6:
		printf("��������ʽ��%d/0%d/0%d\n", a, b, c);
		break;
	case 11:
		printf("��������ʽ��%d/0%d/%d\n", a, b, c);
		break;
	case 7:
		printf("��������ʽ��%d/%d/0%d\n", a, b, c);
		break;
	case 12:
		printf("��������ʽ��%d/%d/%d\n", a, b, c);
		break;

	}
	getchar;
	return 0;


}