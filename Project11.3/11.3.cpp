#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>

#pragma warning(disable:4996) //���C6031����Ĵ���
int judge(int i); //�ж��Ƿ�Ϊ��������
void sort(int* data, int len);//���к���
int main()
{
	int array[40] = {0};
	srand(time(NULL));
	int a = 0;
	int last = 0;
	int index = 0;
	int j = 0;
	//a = ((a % 1000) + 2);����õ�һ��2-1000����
	/*
	for (j = 2; j <= a; j++) {
		if (a % j == 0) {
			break;
		}

	}
	*/
	for (;;) {
		a =  rand() % 1000 + 2;
		//�����Ƿ��ظ��㷨
		for (int p = 0; p<40; p++) {
			if (array[p] == a) {
				j++;
			}
		}
		if (j == 0) {  
			if (judge(a)) {
				array[index] = a;
				index++;
				if (index == 40) {
					break;
				}

			}
		}
		j = 0;
		last = a;

	}

	printf("/@*************************************************************@/ \n");
	//��ӡ5*8������
	for (int z = 0; z < 40; z++) {
		printf("%d \t", array[z]);
		if ((z + 1) % 8 == 0) {
			printf("\n");
		}
		
	}
	printf("/@**************************��С�����**************************@/ \n");
	sort(array, 40);
	for (int z = 0; z < 40; z++) {
		printf("%d \t", array[z]);
		if ((z + 1) % 8 == 0) {
			printf("\n");
		}

	}





}

// ����0���ǣ�����1��
int judge(int n) {
	int flag = 0;
	int i;
	int a = 0;
	if (n < 2) {
		flag = 0;
	}
	else {
		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				a++;
			}
			if (a == 0) {
				flag = 1;
			}
			else {
				flag = 0;
			}
		}

	}
	return flag;

}

void sort(int* data, int len) {
	int i, j, t;
	for (i = 0; i < len; i++) {
		for (j = 0; j < len - i - 1; j++) {
			if (data[j] > data[j + 1]) {
				t = data[j];
				data[j] = data[j + 1];
				data[j + 1] = t;

			}
		}

	}
	



}





















