
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>
#pragma warning(disable:4996)
#define N 7


int main() 
{
	srand(time(0));
	int a = rand();
	int x[N];
	int t;
	int times = 0;
	a = a%11+10 ; //随机得到一个10-20的数
	printf("a = %d", a);  // 测试函数
	printf("(你有7次机会)请输入:\n");
	scanf("%d", &x);
	while (times != 6) {
		if (x[times] == a) {
			printf("成功！输入正确！\n");
			break;
		}
		times++;
		printf("密码错误！你还剩%d次机会输入密码\n",7-times);
		printf("请再次输入：\n");
		scanf("%d", &t);
		x[times] = t;
		
	}
	if (times == 6) {
		printf("您的次数已用完！\n");
		printf("密码为 %d \n", a);
		printf("您的输入记录如下:\n");
		for (int times = 0; times < N; times++) {
			printf("%d \n", x[times]);
		}

	}
	
	
	
	
	getchar();
	return 0;
}