#include "stdio.h"

#pragma warning(disable:4996) //���C6031����Ĵ���

int strchr_find(char str[40], char xCh, int pChr_pos) //(int *pChr_pos???)
{
	char* p;
	pChr_pos = 0;
	int times = 0;
	printf("�����뱻���ҵ��ַ�����\n");
	scanf("%s", str);
	getchar();
	printf("����������ҵ��ַ���\n");
	xCh = getchar();
	getchar();
	p = &str[0];
	while (*p != '\0')
	{
		if (*p == xCh) {
			//��¼����λ��
			times++;
			printf("����λ�ã�%d \t", pChr_pos);
		}
		pChr_pos++;
		p++;
	}

	return times; //���س��ִ���


}



void main(void)
{
	LOOP:
	int retr;
	char str[40];
	char fch = '\0';
	int chrpos = 0;
	
	retr = strchr_find(str, fch, chrpos);
	printf("����ֵΪ��%d \n", retr);
	
	/*while (chrpos[index] != '\0') {
		printf("%c \t", chrpos[index]);
		index++;
	}*/
	
	printf("�Ƿ�Ҫ�ٴ�ִ�У�(��0�����������ʼִ��)\n");
	char choice;
	if ((choice = getchar()) != '0') {
		goto LOOP;
	}

	printf("/*************************END***************************/\n");

}































