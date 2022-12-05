#include <stdio.h>
//#include<time.h>
#include<math.h>
//#define _CRT_SECURE_NO_WARININGS
#pragma warning( disable : 4996 )


int main()
{
 
	//以下注释均为测试代码
	//printf("a = %f\n", a);
	/*b = (int)a;
	printf("b = %d\n", b);*/
	//if (floor(a + 0.5) == a) {
	//	printf("YES\n");
	//}
	//else {
	//	printf("NO\n");
	//}

	int b;
	float a;
	printf("请输入年份！\n");
	scanf("%f", &a);

	
	if ((int)a == a && a >= 0) {
		//printf("为整数\n");
		b = (int)a;
		if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0)) {
			printf("你输入的年份 %d 为闰年！\n",b);

		}
		else {
			printf("你输入的年份 %d 不为闰年！\n",b);
		}
	}
	else {
		printf("ERROR！\n");
	}

	return 0;



}