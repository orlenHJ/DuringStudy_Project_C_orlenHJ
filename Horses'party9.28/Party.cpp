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
	big = 1.0;
	mid = 1.0;
	little = 1.0;
	printf("This a while program! \n");
	while (big <= 100.0) {
		while (mid <= 100.0) {
			while (little <= 100.0) {
				if ((big + mid + little == 100.0) && (big * 3 + mid * 2 + little * (0.5) == 100.0)&&big != 0&&mid!=0&&little!=0) {
					Times++;
					a = big;
					b = mid;
					c = little;
					printf("��ʱΪ��%d�����\n",Times);
					printf("����Ϊ%dֻ ����Ϊ%dֻ С��Ϊ%dֻ\n ", a, b, c);

				}
				
				little++;
			}
			mid++;
			little = 0;
		}
		big++;
		mid = 0;
	}
	printf("һ��Ϊ%d�����\n", Times);
	end = clock();
	printf("��������ʱ��Ϊ��%5.1f \n", (double)(end - start) / 18.2);







	getchar();
	return 0;

}