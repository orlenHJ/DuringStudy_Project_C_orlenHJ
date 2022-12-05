#include "jugde.h"

#pragma warning(disable:4996) //½â¾öC6031ÎÊÌâµÄ´úÂë
int main()
{

	system("cls");
	for (;;) //ÈÎÎñÔËĞĞ
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
			printf("Ñ§Éú×ÜÈËÊıÎª£º%d\n",TotalStu());
			system("pause");
			system("cls");
			break;
		case '6':
		{
			Node* p = LookUpInfo();
			if (p != NULL) {
				printf("ĞÕÃû£º\t");
				printf("ÄêÁä£º\t");
				printf("Ñ§ºÅ£º\t");
				printf("³É¼¨£º\t\n");

				printf(" %s\t %d\ %d\t %d\t\n",
					p->stu.name,
					p->stu.age,
					p->stu.stuNUM,
					p->stu.score
				);
			}
			else {
				printf("Ã»ÓĞÕÒµ½¸ÃÑ§Éú£¡ \n");
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
	printf("* »¶Ó­Ê¹ÓÃÑ§Éú¹ÜÀíÏµÍ³ *\n");
	printf("*----------------------------------------------------*\n");
	printf("* 1£º Â¼ÈëÑ§ÉúĞÅÏ¢ *\n");
	printf("* 2£º ´òÓ¡Ñ§ÉúĞÅÏ¢ *\n");
	printf("* 3£º ±£´æÑ§ÉúĞÅÏ¢ *\n");
	printf("* 4£º ¶ÁÈ¡Ñ§ÉúĞÅÏ¢ *\n");
	printf("* 5£º Í³¼ÆËùÓĞÑ§ÉúÈËÊı *\n");
	printf("* 6£º ²éÕÒÑ§ÉúĞÅÏ¢ *\n");
	printf("* 7£º ĞŞ¸ÄÑ§ÉúĞÅÏ¢ *\n");
	printf("* 8£º É¾³ıÑ§ÉúĞÅÏ¢ *\n");
	printf("* 0£º ÍË³öÑ§ÉúÏµÍ³ *\n");
	printf("*----------------------------------------------------*\n");
	printf("---Ñ¡Ôñ²Ù×÷<0-8> \n");

}



void InputStu(void)
{
	Node *pNewNode =(Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;

	//Í·²å·¨
	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;

	}
	else {
		pNewNode->pNext = g_pHead;
		g_pHead = pNewNode;

	}
	printf("ÇëÊäÈëÑ§ÉúĞÕÃû£º\n");
	scanf("%s", pNewNode->stu.name);
	printf("ÇëÊäÈëÑ§ÉúÄêÁä£º\n");
	scanf("%d", &pNewNode->stu.age);
	printf("ÇëÊäÈëÑ§ÉúÑ§ºÅ£º\n");
	scanf("%d", &pNewNode->stu.stuNUM);
	printf("ÇëÊäÈëÑ§Éú³É¼¨£º\n");
	scanf("%d", &pNewNode->stu.score);

	printf("Ñ§ÉúĞÅÏ¢Â¼ÈëÍê³É\n");
	system("pause");
	system("cls");


}




void PrintfStu(void)
{
	printf("ĞÕÃû£º\t");	
	printf("ÄêÁä£º\t");	
	printf("Ñ§ºÅ£º\t");
	printf("³É¼¨£º\t\n");
	
	//±éÀúÁ´±í
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
	

	system("pause"); //Í£Ö¹ÔÙ´Ë£¬ÈÎÒâ¼ü¼ÌĞø
	system("cls");

}


void SaveStuInfo(void)
{
	//ÎÄ¼ş¶ÁĞ´²Ù×÷
	FILE* fp = fopen("D:\\C#\\stu.data", "w");
	if (fp == NULL)
	{
		printf("´ò¿ªÎÄ¼şÊ§°Ü£¡ \n");
		return;

	}


	//±éÀúÁ´±íĞ´Èë
	Node* p = g_pHead;
	while (p != NULL)
	{
		fwrite(&p->stu,1,sizeof(Student_info),fp);
		p = p->pNext;

	}



	fclose(fp);
	printf("Ğ´ÈëÊı¾İ³É¹¦£¡\n");
	system("pause"); 
	system("cls");
}









/*
ĞŞ¸ÄÈÕÖ¾£º
	- »á³öÏÖ £º ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ?       µÄBUG
	½â¾ö·½·¨£º
	- ±ãÍ¨¹ı½¨Á¢Ò»¸ö»º´æ½á¹¹Ìåstu´æ·Å¶ÁÈ¡Á÷
	- ÔÙÍ¨¹ımemcpy¸´ÖÆµ½Ô­Á´±íÉÏ

*/
void ReadStuInfo(void)
{
	FILE* fp = fopen("D:\\C#\\stu.data", "r");
	if (fp == NULL)
	{
		printf("´ò¿ªÎÄ¼şÊ§°Ü£¡ \n");
		return;
	}

	Student_info stu;

	//feof()ÊÇ¼ì²âÁ÷ÉÏµÄÎÄ¼ş½áÊø·ûµÄº¯Êı£¬Èç¹ûÎÄ¼ş½áÊø£¬Ôò·µ»Ø·Ç0Öµ£¬·ñÔò·µ»Ø0
	//!feof(fp)
	//C ¿âº¯Êı size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream) 
	//´Ó¸ø¶¨Á÷ stream ¶ÁÈ¡Êı¾İµ½ ptr ËùÖ¸ÏòµÄÊı×éÖĞ¡£
	while (fread(&stu, 1, sizeof(Student_info), fp))
	{
		//´´½¨ĞÂ½Úµã
		Node* pNewNode = (Node*)malloc(sizeof(Node));
		pNewNode->pNext = NULL;
		
		//ĞŞ¸ÄÈÕÖ¾¶ÔÓ¦µÄ fread(&pNewNode->stu, 1, sizeof(Student_info), fp);
		
		memcpy(pNewNode, &stu, sizeof(Student_info));

		//Í·²å·¨
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
	printf("¼ÓÔØÊı¾İ³É¹¦£¡ \n");
	system("pause"); 
	system("cls");
}



int TotalStu(void)
{
	int nCount = 0;

	//±éÀú
	Node* p = g_pHead;
	while (p != NULL)
	{
		nCount++;
		p = p->pNext;

	}
	return nCount;
	

}



/*

*º¯Êı LookUpInfo(void)
* Ä¿Ç°´ıĞŞ¸ÄµÄBUG£º
		ÇëÊäÈëÒª²éÕÒµÄÑ§ÉúÑ§ºÅ£º
		1
		ÇëÊäÈëÒª²éÕÒµÄÑ§ÉúĞÕÃû£º
		lc
		ĞÕÃû£º  ÄêÁä£º  Ñ§ºÅ£º  ³É¼¨£º
		hj      12121	131     131
	//12.4ÒÑĞŞ¸Ä
*/
Node* LookUpInfo(void)
{
	int nstuNum;
	char lokName[50];
	printf("ÇëÊäÈëÒª²éÕÒµÄÑ§ÉúÑ§ºÅ£º\n");
	scanf("%d", &nstuNum);
	printf("ÇëÊäÈëÒª²éÕÒµÄÑ§ÉúĞÕÃû£º\n");
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
	printf("ÇëÊäÈëĞèÒªĞŞ¸ÄµÄÑ§ÉúĞÅÏ¢µÄÑ§ºÅ£º \n");
	scanf("%d", &stuID);
	Node* p = g_pHead;
	while (p != NULL)
	{
		if (p->stu.stuNUM == stuID) {
			printf("ÇëÊäÈëÒªĞŞ¸ÄµÄÑ§ÉúĞÕÃû£¬ÄêÁä£¬³É¼¨£º\n");
			scanf("%s %d %d", p->stu.name, &p->stu.age, &p->stu.score);
			printf("ĞŞ¸Ä³É¹¦£¡\n");
			break;
		}
		p = p->pNext;

	}
	if (p == NULL)
	{
		printf("Î´ÕÒµ½¸ÃÑ§Éú£¡ÇëÖØÊÔ \n");

	}

}




void DelStu(void)
{
	int nStuID;
	printf("ÇëÊäÈëÒªÉ¾³ıµÄÑ§ÉúµÄÑ§ºÅ£º\n");
	scanf("%d", &nStuID);
	Node* p1, *p2;

	//ÅĞ¶ÏÊÇ·ñÎªÍ·½Úµã
	if (g_pHead->stu.stuNUM == nStuID) {
		p1 = g_pHead;
		g_pHead = g_pHead->pNext;
		free(p1);
		system("pause");
		system("cls");
		return;

	}

	//·ÇÍ·½Úµã
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
		printf("Î´ÕÒµ½¸ÃÑ§ÉúĞÅÏ¢£¡\n");
	}


	system("pause");
	system("cls");
}






























