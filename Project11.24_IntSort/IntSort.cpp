#include "stdio.h"
#include "time.h"
#include<stdlib.h>
#pragma warning(disable:4996) //解决C6031问题的代码

void SortInt(int *pIN)
{
	int i, j,temp;
	for (i = 0; i < 19; i++)
	{
		for (j = 0; j < 19 - i; j++) {
			if (*(pIN + j) > *(pIN + j + 1)) {
				temp = *(pIN + j);
				*(pIN + j) = *(pIN + j + 1);
				*(pIN + j + 1) = temp;
			}
		}
	}
}
void main(void)
{
	srand(time(NULL));
	int SUM[20] = {0};
	//int Rmd = rand();
	for (int i = 0; i < 20; i++) {
		SUM[i] = rand();
	}
	printf("/**********************原数组为*********************/\n");
	for (int i = 0; i < 20; i++) {
		printf("%d \t", SUM[i]);
		if (i == 9) { printf("\n"); }
		if (i == 19) { printf("\n"); }
	}
	SortInt(SUM);
	printf("/***************由小到大排序后数组为****************/\n");
	for (int i = 0; i < 20; i++) {
		printf("%d \t", SUM[i]);
		if (i == 9) { printf("\n"); }
		if (i == 19) { printf("\n"); }
	}
}




















