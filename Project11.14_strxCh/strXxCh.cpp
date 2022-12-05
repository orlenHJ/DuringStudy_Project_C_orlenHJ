#include "stdio.h"

#pragma warning(disable:4996) //解决C6031问题的代码

int strchr_find(char str[40], char xCh, int pChr_pos) //(int *pChr_pos???)
{
	char* p;
	pChr_pos = 0;
	int times = 0;
	printf("请输入被查找的字符串：\n");
	scanf("%s", str);
	getchar();
	printf("请输入待查找的字符：\n");
	xCh = getchar();
	getchar();
	p = &str[0];
	while (*p != '\0')
	{
		if (*p == xCh) {
			//记录出现位置
			times++;
			printf("出现位置：%d \t", pChr_pos);
		}
		pChr_pos++;
		p++;
	}

	return times; //返回出现次数


}



void main(void)
{
	LOOP:
	int retr;
	char str[40];
	char fch = '\0';
	int chrpos = 0;
	
	retr = strchr_find(str, fch, chrpos);
	printf("返回值为：%d \n", retr);
	
	/*while (chrpos[index] != '\0') {
		printf("%c \t", chrpos[index]);
		index++;
	}*/
	
	printf("是否要再次执行？(按0以外任意键开始执行)\n");
	char choice;
	if ((choice = getchar()) != '0') {
		goto LOOP;
	}

	printf("/*************************END***************************/\n");

}































