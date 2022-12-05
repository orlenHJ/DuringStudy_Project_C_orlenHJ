#include "stdio.h"
#include "string.h"

#pragma warning(disable:4996) //解决C6031问题的代码
//10101001001010001001010001010101
int TxIP(char IP2[])
{
	scanf("%s", IP2);
	getchar();
	//if (strlen(IP2) > 32) { printf("输入非法！请重新输入：\n"); TxIP(IP2); }  //判断32位二进制是否合法 嵌套函数
	//调试 printf("%s \n", IP2);
	int sum_10 = 0;
	int index;
	for (index = 0; index < strlen(IP2); index++) {
		sum_10 = sum_10 * 2 + IP2[index] - '0';
		if (index % 8 == 7) {	//判断此时是否为  IP2[7] 前八位的最后一位
			if (index != 7) {
				printf(".");
			}						
			printf("%d", sum_10);
			sum_10 = 0;			//reset 开始表示下一段整数

		}

	}
	return 0;
}



void main()
{
	char IPnumb[100];
	printf("请输入32位IP字符：\n");
	TxIP(IPnumb);



}