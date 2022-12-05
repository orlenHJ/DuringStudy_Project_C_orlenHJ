#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "stdbool.h"
#include "math.h"
#include "string.h"


#pragma warning(disable:4996) //���C6031����Ĵ���


void SortB2S(int* pIN, int nSUM)
{
	int i, j, temp;
	for (i = 0; i < nSUM - 1; i++) {
		for (j = 0; j < nSUM - 1 - i; j++) {
			if (*(pIN + i) < *(pIN + i + j + 1)) {
				temp = *(pIN + i);
				*(pIN + i) = *(pIN + i + j + 1);
				*(pIN + i + j + 1) = temp;
			}
		}
	}


}

void nXn(int n)
{
	int i, j; //i-Y  j-X
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++) {
			printf("%d \t", i * j);
			if (j == n) { printf("\n"); }
		}
	}

}

float I_sin(float a, float b, int precision)
{
	float len = b - a;
	float T_hi;
	float Total = 0;
	float part_Len = len / (float)precision;
	for (int i = 1; i <= precision;i++){
		//float calcuSUM;
		b = a + part_Len;
		//calcuSUM = (b + a) / 2.0;
		//T_hi = sin(calcuSUM);
		//Total += (T_hi* part_Len);
		Total += (sin(a) + sin(b)) * part_Len / 2.0;
		
		a = b;
	}
	
	return Total;


}




void main(void)
{
	printf("\n /***********************��Ŀһ***************************/ \n");
	srand(time(NULL));
	int nSUM = (rand()%11)+20; //���20~30������
	int NUMS[30] = { 0 };
	int j = 0;
	for (;;)
	{
		
		NUMS[j] = rand() % 101;
		j++;
		if (j == (nSUM - 1)) { break; }
		
	}
	SortB2S(NUMS, nSUM);
	printf("/___________һ����%d������__________/\n", nSUM);
	for (int i = 0; i < nSUM; i++) {
		printf("%d \t", NUMS[i]);
		if (i == 9 || i == 18) { printf("\n"); }
	}

	printf("\n /**********************��Ŀ��***************************/ \n");
	int n = (rand()%14)+7;
	printf("N*N�˷����NֵΪ��%d \n", n);
	nXn(n);



	printf("\n /**********************��Ŀ��***************************/ \n");
	int Iin;
	float a, b;
	printf("������sin�������ֵ����ޣ������Լ����ȣ��ո��������\n");
	scanf("%f %f %d", &a, &b, &Iin);
	printf("����ó�����Ϊ��%f", I_sin(a, b, Iin));




}













