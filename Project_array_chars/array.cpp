#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include<malloc.h>
#include <string.h>
#pragma warning(disable:4996) //���C6031����Ĵ���
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
	//��ӡ����
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
	
	printf("/*************����λ�ú�************/\n");


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
		printf("��%d�����ֵΪ%d\t", index + 1, array_2d[index][max]);
		printf("�ڵ�%d�е�%d��\n", index + 1, max + 1);
	}











}


































