
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>
#pragma warning(disable:4996)
#define N 7


int main() 
{
	srand(time(0));
	int a = rand();
	int x[N];
	int t;
	int times = 0;
	a = a%11+10 ; //����õ�һ��10-20����
	printf("a = %d", a);  // ���Ժ���
	printf("(����7�λ���)������:\n");
	scanf("%d", &x);
	while (times != 6) {
		if (x[times] == a) {
			printf("�ɹ���������ȷ��\n");
			break;
		}
		times++;
		printf("��������㻹ʣ%d�λ�����������\n",7-times);
		printf("���ٴ����룺\n");
		scanf("%d", &t);
		x[times] = t;
		
	}
	if (times == 6) {
		printf("���Ĵ��������꣡\n");
		printf("����Ϊ %d \n", a);
		printf("���������¼����:\n");
		for (int times = 0; times < N; times++) {
			printf("%d \n", x[times]);
		}

	}
	
	
	
	
	getchar();
	return 0;
}