#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<dos.h>
#pragma warning(disable:4996)

int main() 
{
	clock_t start, end;
	int Times = 0;
	double big, mid, little;
	int a, b, c;
	start = clock();
	printf("This a while program! \n");
	for (big = 0.0; big <= 100.0; big++)
	{
		for (mid = 0.0; mid <= 100.0; mid++) 
		{
			for (little = 0.0; little <= 100.0; little++) 
			{
				if ((big + mid + little == 100.0) && (big * 3 + mid * 2 + little * (0.5) == 100.0)) {
					Times++;
					a = big;
					b = mid;
					c = little;
					printf("此时为第%d种情况\n", Times);
					printf("大马为%d只 中马为%d只 小马为%d只\n ", a, b, c);
				}

			}
			little = 0.0;
		}
		mid = 0.0;
	}
	printf("一共为%d种情况\n", Times);
	end = clock();
	printf("程序所用时间为：%5.1f \n", (double)(end - start) / 18.2);

	getchar();
	return 0;


}