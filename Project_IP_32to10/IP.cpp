#include "stdio.h"
#include "string.h"

#pragma warning(disable:4996) //���C6031����Ĵ���
//10101001001010001001010001010101
int TxIP(char IP2[])
{
	scanf("%s", IP2);
	getchar();
	//if (strlen(IP2) > 32) { printf("����Ƿ������������룺\n"); TxIP(IP2); }  //�ж�32λ�������Ƿ�Ϸ� Ƕ�׺���
	//���� printf("%s \n", IP2);
	int sum_10 = 0;
	int index;
	for (index = 0; index < strlen(IP2); index++) {
		sum_10 = sum_10 * 2 + IP2[index] - '0';
		if (index % 8 == 7) {	//�жϴ�ʱ�Ƿ�Ϊ  IP2[7] ǰ��λ�����һλ
			if (index != 7) {
				printf(".");
			}						
			printf("%d", sum_10);
			sum_10 = 0;			//reset ��ʼ��ʾ��һ������

		}

	}
	return 0;
}



void main()
{
	char IPnumb[100];
	printf("������32λIP�ַ���\n");
	TxIP(IPnumb);



}