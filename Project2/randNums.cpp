#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int i = 0;
	int Nums[9];
	srand(time(0));
	int a = rand() % 25 + 65;
	int b = rand() % 25 + 65;
	int c = rand() % 25 + 65;
	int d = rand() % 25 + 65;
	int e = rand() % 25 + 65;
	int f = rand() % 25 + 65;
	int g = rand() % 25 + 65;
	int h = rand() % 25 + 65;
	int j = rand() % 25 + 65;

	printf("      %d                %c \n", a, a);
	printf("   %d %d %d          %c %c %c \n", b, c, d,b, c, d);
	printf("%d %d %d %d %d     %c %c %c %c %c \n", e, f, g, h, j, e, f, g, h, j);

	/*
	for (;;) {
		Nums[i] = rand() % 100;
		while (65>= Nums[i]||Nums[i] >=90) {
			Nums[i] = rand() % 100;
		}
		if (65 <= Nums[i] <= 90) {
			i++;
		}
		else {
			Nums[i] = rand() % 100;
		}
		printf("Num = %d \n", Nums[i]);//打印每一个数
		if(i > 9){
			break;
		}
		
	}
	//int a = rand();
	//int x;
	//int t;
	//a %= 100; //随机得到一个一百以内的数
	*/


	//int a, b, c, d, Sum;
	//double Average;
	//scanf_s("%d %d %d %d", &a, &b, &c, &d);
	//Sum = a + b + c + d;
	//Average = Sum / 4.0;
	//printf("Sum = %d  Average = %lf \n", Sum, Average);
	//return 0;







	getchar();
	return 0;
}