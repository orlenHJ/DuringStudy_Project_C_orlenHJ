#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include<malloc.h>
#include <string.h>
#pragma warning(disable:4996) //解决C6031问题的代码
#define UNUSED(x) (void)(x) 

/*
void main()
{
	int array_2d[5][5] = {0};
	srand(time(NULL));
	int index = 0, inindex = 0;
	for (index = 0; index < 5; index++) {
		for (inindex = 0; inindex < 5; index++) {
			
			
			array_2d[index][inindex] = rand() % 100 + 0;

		}

	}
	//打印数组
	for (index = 0; index < 5; index++) {
		for (inindex = 0; inindex < 5; index++) {
			printf("%d\t", array_2d[index][inindex]);
			if (inindex == 4)
				printf("\n");
		}
	}
	
	int pocket[5] = { 0 };
	for (int index = 0; index < 5; index++) {
		pocket[index] =

	}
	

}
*/



#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void main()
{
	int index = 0, inindex = 0;
	int array_2d[5][5] = { 0 };
	srand(time(NULL));
	for (index = 0; index < 5; index++) {
		for (inindex = 0; inindex < 5; inindex++) {
			array_2d[index][inindex] = rand() % 101 + 0;
		}
		
	}
	for (index = 0; index < 5; index++)
	{
		for (inindex = 0; inindex < 5; inindex++) {
			printf("%d\t", array_2d[index][inindex]);
		}
		printf("\n");
	}
	
	printf("/*************互换位置后************/\n");


	for (index = 0; index < 5; index++)
	{
		inindex = array_2d[0][index];
		array_2d[0][index] = array_2d[4][index];
		array_2d[4][index] = inindex;
	}
	for (index = 0; index < 5; index++)
	{
		for (inindex = 0; inindex < 5; inindex++)
			printf("%d\t", array_2d[index][inindex]);
		printf("\n");
	}


	for (index = 0; index < 5; index++)
	{
		int max = 0;
		for (inindex = 1; inindex < 5; inindex++) {
			if (array_2d[index][inindex] > array_2d[index][max]) {
				max = inindex;
				
			}
		}
		printf("第%d行最大值为%d\t", index + 1, array_2d[index][max]);
		printf("在第%d行第%d列\n", index + 1, max + 1);
	}











}


































