#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "stdbool.h"
#include "math.h"
#include "string.h"


#pragma warning(disable:4996) //解决C6031问题的代码


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
	printf("\n /***********************题目一***************************/ \n");
	srand(time(NULL));
	int nSUM = (rand()%11)+20; //获得20~30的整数
	int NUMS[30] = { 0 };
	int j = 0;
	for (;;)
	{
		
		NUMS[j] = rand() % 101;
		j++;
		if (j == (nSUM - 1)) { break; }
		
	}
	SortB2S(NUMS, nSUM);
	printf("/___________一共有%d个数字__________/\n", nSUM);
	for (int i = 0; i < nSUM; i++) {
		printf("%d \t", NUMS[i]);
		if (i == 9 || i == 18) { printf("\n"); }
	}

	printf("\n /**********************题目二***************************/ \n");
	int n = (rand()%14)+7;
	printf("N*N乘法表的N值为：%d \n", n);
	nXn(n);



	printf("\n /**********************题目三***************************/ \n");
	int Iin;
	float a, b;
	printf("请输入sin函数积分的下限，上限以及精度（空格隔开）：\n");
	scanf("%f %f %d", &a, &b, &Iin);
	printf("计算得出积分为：%f", I_sin(a, b, Iin));




}













