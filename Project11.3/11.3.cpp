#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>

#pragma warning(disable:4996) //解决C6031问题的代码
int judge(int i); //判断是否为素数函数
void sort(int* data, int len);//排列函数
int main()
{
	int array[40] = {0};
	srand(time(NULL));
	int a = 0;
	int last = 0;
	int index = 0;
	int j = 0;
	//a = ((a % 1000) + 2);随机得到一个2-1000的数
	/*
	for (j = 2; j <= a; j++) {
		if (a % j == 0) {
			break;
		}

	}
	*/
	for (;;) {
		a =  rand() % 1000 + 2;
		//这里是防重复算法
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
	//打印5*8的数组
	for (int z = 0; z < 40; z++) {
		printf("%d \t", array[z]);
		if ((z + 1) % 8 == 0) {
			printf("\n");
		}
		
	}
	printf("/@**************************大小排序后**************************@/ \n");
	sort(array, 40);
	for (int z = 0; z < 40; z++) {
		printf("%d \t", array[z]);
		if ((z + 1) % 8 == 0) {
			printf("\n");
		}

	}





}

// 返回0不是，返回1是
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





















