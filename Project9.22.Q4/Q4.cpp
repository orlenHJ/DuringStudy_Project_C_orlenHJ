#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>
#pragma warning(disable:4996) //解决C6031问题的代码


int main() {
	int a ;
	int b ;
	int c ;
	int k = 0;
	int l = 0;
	printf("请分别输入日期年月日：\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("第一种形式：%d/%d/%d \n", a, b, c);
	printf("第二种形式：%d年%d月%d日 \n", a, b, c);

	k = b < 10 ? 1 : 2;//左真右假
	l = c < 10 ? 5 : 10;
	switch (k + l) {
	case 6:
		printf("第三种形式：%d/0%d/0%d\n", a, b, c);
		break;
	case 11:
		printf("第三种形式：%d/0%d/%d\n", a, b, c);
		break;
	case 7:
		printf("第三种形式：%d/%d/0%d\n", a, b, c);
		break;
	case 12:
		printf("第三种形式：%d/%d/%d\n", a, b, c);
		break;

	}
	getchar;
	return 0;


}