#include "jugde.h"

#pragma warning(disable:4996) //���C6031����Ĵ���
int main()
{

	system("cls");
	for (;;) //��������
	{
		menuWelcome();


		char ch = _getch();
		//getchar();

		switch (ch)
		{
		case '1':
			InputStu();
			break;
		case '2':
			PrintfStu();
			break;
		case '3':
			SaveStuInfo();
			break;
		case '4':
			ReadStuInfo();
			system("pause");
			system("cls");
			break;
		case '5':
			printf("ѧ��������Ϊ��%d\n",TotalStu());
			system("pause");
			system("cls");
			break;
		case '6':
		{
			Node* p = LookUpInfo();
			if (p != NULL) {
				printf("������\t");
				printf("���䣺\t");
				printf("ѧ�ţ�\t");
				printf("�ɼ���\t\n");

				printf(" %s\t %d\ %d\t %d\t\n",
					p->stu.name,
					p->stu.age,
					p->stu.stuNUM,
					p->stu.score
				);
			}
			else {
				printf("û���ҵ���ѧ���� \n");
			}
			system("pause");
			system("cls");
		}
			break;
		case '7':
			ModifyStu();
			break;
		case '8':
			DelStu();
			break;
		case '0':
			printf("BYE");
			return 0;
			break;
		default:
			break;



		}
		system("cls");
	}
	
	
	return 0 ;

}










void menuWelcome(void)
{
	printf("*----------------------------------------------------*\n");
	printf("* ��ӭʹ��ѧ������ϵͳ *\n");
	printf("*----------------------------------------------------*\n");
	printf("* 1�� ¼��ѧ����Ϣ *\n");
	printf("* 2�� ��ӡѧ����Ϣ *\n");
	printf("* 3�� ����ѧ����Ϣ *\n");
	printf("* 4�� ��ȡѧ����Ϣ *\n");
	printf("* 5�� ͳ������ѧ������ *\n");
	printf("* 6�� ����ѧ����Ϣ *\n");
	printf("* 7�� �޸�ѧ����Ϣ *\n");
	printf("* 8�� ɾ��ѧ����Ϣ *\n");
	printf("* 0�� �˳�ѧ��ϵͳ *\n");
	printf("*----------------------------------------------------*\n");
	printf("---ѡ�����<0-8> \n");

}



void InputStu(void)
{
	Node *pNewNode =(Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;

	//ͷ�巨
	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;

	}
	else {
		pNewNode->pNext = g_pHead;
		g_pHead = pNewNode;

	}
	printf("������ѧ��������\n");
	scanf("%s", pNewNode->stu.name);
	printf("������ѧ�����䣺\n");
	scanf("%d", &pNewNode->stu.age);
	printf("������ѧ��ѧ�ţ�\n");
	scanf("%d", &pNewNode->stu.stuNUM);
	printf("������ѧ���ɼ���\n");
	scanf("%d", &pNewNode->stu.score);

	printf("ѧ����Ϣ¼�����\n");
	system("pause");
	system("cls");


}




void PrintfStu(void)
{
	printf("������\t");	
	printf("���䣺\t");	
	printf("ѧ�ţ�\t");
	printf("�ɼ���\t\n");
	
	//��������
	Node* p = g_pHead;
	while (p != NULL)
	{
		printf(" %s\t %d\ %d\t %d\t\n",
			p->stu.name,
			p->stu.age,
			p->stu.stuNUM,
			p->stu.score			
			);

		p = p->pNext;

	}
	

	system("pause"); //ֹͣ�ٴˣ����������
	system("cls");

}


void SaveStuInfo(void)
{
	//�ļ���д����
	FILE* fp = fopen("D:\\C#\\stu.data", "w");
	if (fp == NULL)
	{
		printf("���ļ�ʧ�ܣ� \n");
		return;

	}


	//��������д��
	Node* p = g_pHead;
	while (p != NULL)
	{
		fwrite(&p->stu,1,sizeof(Student_info),fp);
		p = p->pNext;

	}



	fclose(fp);
	printf("д�����ݳɹ���\n");
	system("pause"); 
	system("cls");
}









/*
�޸���־��
	- ����� �� ����������������������������������������������?       ��BUG
	���������
	- ��ͨ������һ������ṹ��stu��Ŷ�ȡ��
	- ��ͨ��memcpy���Ƶ�ԭ������

*/
void ReadStuInfo(void)
{
	FILE* fp = fopen("D:\\C#\\stu.data", "r");
	if (fp == NULL)
	{
		printf("���ļ�ʧ�ܣ� \n");
		return;
	}

	Student_info stu;

	//feof()�Ǽ�����ϵ��ļ��������ĺ���������ļ��������򷵻ط�0ֵ�����򷵻�0
	//!feof(fp)
	//C �⺯�� size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream) 
	//�Ӹ����� stream ��ȡ���ݵ� ptr ��ָ��������С�
	while (fread(&stu, 1, sizeof(Student_info), fp))
	{
		//�����½ڵ�
		Node* pNewNode = (Node*)malloc(sizeof(Node));
		pNewNode->pNext = NULL;
		
		//�޸���־��Ӧ�� fread(&pNewNode->stu, 1, sizeof(Student_info), fp);
		
		memcpy(pNewNode, &stu, sizeof(Student_info));

		//ͷ�巨
		if (g_pHead == NULL)
		{
			g_pHead = pNewNode;

		}
		else {
			pNewNode->pNext = g_pHead;
			g_pHead = pNewNode;

		}


	}



	fclose(fp);
	printf("�������ݳɹ��� \n");
	system("pause"); 
	system("cls");
}



int TotalStu(void)
{
	int nCount = 0;

	//����
	Node* p = g_pHead;
	while (p != NULL)
	{
		nCount++;
		p = p->pNext;

	}
	return nCount;
	

}



/*

*���� LookUpInfo(void)
* Ŀǰ���޸ĵ�BUG��
		������Ҫ���ҵ�ѧ��ѧ�ţ�
		1
		������Ҫ���ҵ�ѧ��������
		lc
		������  ���䣺  ѧ�ţ�  �ɼ���
		hj      12121	131     131
	//12.4���޸�
*/
Node* LookUpInfo(void)
{
	int nstuNum;
	char lokName[50];
	printf("������Ҫ���ҵ�ѧ��ѧ�ţ�\n");
	scanf("%d", &nstuNum);
	printf("������Ҫ���ҵ�ѧ��������\n");
	scanf("%s", lokName);

	Node* p = g_pHead;
	while (p != NULL)
	{
		if (p->stu.stuNUM == nstuNum || strcmp(p->stu.name,lokName) == 0) {
			return p;
		}
		p = p->pNext;

	}


	return NULL;

}


void ModifyStu(void)
{
	int stuID;
	printf("��������Ҫ�޸ĵ�ѧ����Ϣ��ѧ�ţ� \n");
	scanf("%d", &stuID);
	Node* p = g_pHead;
	while (p != NULL)
	{
		if (p->stu.stuNUM == stuID) {
			printf("������Ҫ�޸ĵ�ѧ�����������䣬�ɼ���\n");
			scanf("%s %d %d", p->stu.name, &p->stu.age, &p->stu.score);
			printf("�޸ĳɹ���\n");
			break;
		}
		p = p->pNext;

	}
	if (p == NULL)
	{
		printf("δ�ҵ���ѧ���������� \n");

	}

}




void DelStu(void)
{
	int nStuID;
	printf("������Ҫɾ����ѧ����ѧ�ţ�\n");
	scanf("%d", &nStuID);
	Node* p1, *p2;

	//�ж��Ƿ�Ϊͷ�ڵ�
	if (g_pHead->stu.stuNUM == nStuID) {
		p1 = g_pHead;
		g_pHead = g_pHead->pNext;
		free(p1);
		system("pause");
		system("cls");
		return;

	}

	//��ͷ�ڵ�
	Node* p = g_pHead;
	while (p->pNext != NULL)
	{
		if (p->pNext->stu.stuNUM == nStuID) {
			p2 = p->pNext;
			p->pNext = p->pNext->pNext;		
			free(p2);
			system("pause");
			system("cls");
			return;

		}
		p = p->pNext;
		if (p->pNext == NULL)
		{
			break;
		}
	}

	if (p->pNext == NULL)
	{
		printf("δ�ҵ���ѧ����Ϣ��\n");
	}


	system("pause");
	system("cls");
}






























