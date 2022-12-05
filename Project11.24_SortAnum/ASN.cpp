#include "stdio.h"


#define chNotINSum(x)  ('0' <= x && x <= '9')? 0 : 1 //判断是否为数字字符

#pragma warning(disable:4996) //解决C6031问题的代码


////////////////////////////////////////////////////////////


//int INTnumbers = 0;
//
//void AsortSum(char* pIn, int* pbuff)
//{
//	int lenth = sizeof(*pIn) / sizeof(char) - 1;
//	int xxx = 1;
//	int index = 0;
//	char temp[50];
//	//while (*pIn != '\0')
//	//{
//	//	if ('0' <= (*pIn) && (*pIn) <= '9' && (*(pIn + 1) == *(pIn) + 1)) {
//	//		index = 1; //重置为1
//	//		while (*(pIn + index) == *(pIn + index -1) + 1) {	//判断每一位与下一位是否相同
//	//			if (chNotINSum(*(pIn + index))) { break; }		//判断下一位是否为数字字符
//	//			RxNumch[Rxindex1][Rxindex2] = *(pIn + index - 1);
//	//			Rxindex2++;
//	//			RxNumch[Rxindex1][Rxindex2] = *(pIn + index);
//	//			
//	//			index++;
//	//		}
//	//		RxNumch[Rxindex1][Rxindex2 + 1] = '\0';
//	//		Rxindex1++;
//	//		pIn = pIn + index;
//	//	}
//	//	pIn++ ;
//	//}
//
//	while (*pIn != '\0')
//	{	
//		
//		if('0' <= (*(pIn)) && (*(pIn)) <= '9') {
//			INTnumbers++;
//			while ('0' <= (*(pIn + index)) && (*(pIn + index)) <= '9')
//			{
//				temp[index] = *(pIn + index);
//				index++;
//			}
//			temp[index] = '\0';
//			
//			for (int i = 0; i < index; i++)
//			{
//				*pbuff = (*pbuff)*10 + (temp[i] - '0');
//			}
//			pbuff++;
//			pIn = pIn + index - 1;
//			index = 0;
//		}
//		
//		
//		
//		pIn++;
//
//	}
//	
//	
//	 
//
//
//
//
//}
//
//void main(void)
//{
//	char INPUT[1000];
//	int numbers = 0;
//	int buffsum[1000] = {0};
//	int* p = &buffsum[0];
//	printf("Please input : \n");
//	scanf("%s", INPUT);
//	getchar();
//	/*char* p = INPUT;调试用代码
//	if (*(p + 1) == (*p) + 1) {
//		printf("ok");    
//	}*/
//	/*AsortSum(INPUT, buffsum);
//	for (int i = 0; i < 50; i++) {
//		printf("%s", RxNumch[i]);
//	}*/
//
//	
//	AsortSum(INPUT, buffsum);
//	printf("有整数个数：%d", INTnumbers);
//	printf("分别有：\n");
//	
//	for(int i = 0;i<50;i++)
//	{
//		printf("%d \t", buffsum[i]);
//		i++;
//	}
//
//	
//
//}



#include <stdio.h>
#pragma warning(disable:4996) //解决C6031问题的代码
//a123x456=4567?45at587
//a123x456 = 4567?45at 587
int DOPSS(char* arr, int* a) {

	int tem[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		tem[i] = 65535;
	}
	for (int i = 0; i < 100; i++) {
		if (48 <= *(arr + i) && *(arr + i) <= 57) {
			tem[i] = *(arr + i) - '0';
		}
	}

	int i = 0, cnt = 0;

	for (i; i < 100; i++) {
		int sum = 0;
		while (tem[i] != 65535) {
			sum = sum * 10 + tem[i];
			i++;
		}
		*(a + cnt) = sum;
		cnt++;
		if (*(a + cnt - 1) == 0)
			cnt--;
	}

	return cnt;
}

int main() {

	char arr[100] = { '0' };
	int a[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		a[i] = 65535;
	}
	gets_s(arr);
	puts(arr);

	int cnt = DOPSS(arr, a);
	printf("整数的个数为：%d\n", cnt);
	printf("分别有：\n");

	for (int i = 0; i < 100; i++) {
		if (a[i] > 0 && a[i] < 65535)
			printf("%d  ", a[i]);
	}

	return 0;
}


















