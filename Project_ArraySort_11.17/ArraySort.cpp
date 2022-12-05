#include<stdio.h>


#pragma warning(disable:4996) //解决C6031问题的代码

//从大到小的排序函数
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

void printfOut_intArray(int in[],int lenth) //整形数组printf
{
	for (int i = 0; i < lenth; i++) {
		printf("%d \t", in[i]);
	}//输出内容
	printf("\n");

}

void main(void)
{
	int Array[5] = { 45,97,12,32,87, };
	printfOut_intArray(Array, sizeof(Array) / sizeof(int));
	printf("/***********由大至小排列后************/\n");
	Sort_B2S(Array, 5);
	printfOut_intArray(Array, sizeof(Array) / sizeof(int));

}




















