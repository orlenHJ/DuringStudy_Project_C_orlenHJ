#include<stdio.h>


#pragma warning(disable:4996) //���C6031����Ĵ���

//�Ӵ�С��������
void Sort_B2S(int x[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++) {				
		for (j = 0; j < len - 1 - i; j++) {     
			if (x[i] < x[i + j + 1]) {
				temp = x[i];
				x[i] = x[i + j + 1];
				x[i + j + 1] = temp;
			}
		}
	}
}

void printfOut_intArray(int in[],int lenth) //��������printf
{
	for (int i = 0; i < lenth; i++) {
		printf("%d \t", in[i]);
	}//�������
	printf("\n");

}

void main(void)
{
	int Array[5] = { 45,97,12,32,87, };
	printfOut_intArray(Array, sizeof(Array) / sizeof(int));
	printf("/***********�ɴ���С���к�************/\n");
	Sort_B2S(Array, 5);
	printfOut_intArray(Array, sizeof(Array) / sizeof(int));

}




















