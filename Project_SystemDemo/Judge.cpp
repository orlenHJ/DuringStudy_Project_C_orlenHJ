#include "jugde.h"

#pragma warning(disable:4996) //解决C6031问题的代码
int main()
{

	system("cls");
	for (;;) //任务运行
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
			printf("学生总人数为：%d\n",TotalStu());
			system("pause");
			system("cls");
			break;
		case '6':
		{
			Node* p = LookUpInfo();
			if (p != NULL) {
				printf("姓名：\t");
				printf("年龄：\t");
				printf("学号：\t");
				printf("成绩：\t\n");

				printf(" %s\t %d\ %d\t %d\t\n",
					p->stu.name,
					p->stu.age,
					p->stu.stuNUM,
					p->stu.score
				);
			}
			else {
				printf("没有找到该学生！ \n");
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
	printf("* 欢迎使用学生管理系统 *\n");
	printf("*----------------------------------------------------*\n");
	printf("* 1： 录入学生信息 *\n");
	printf("* 2： 打印学生信息 *\n");
	printf("* 3： 保存学生信息 *\n");
	printf("* 4： 读取学生信息 *\n");
	printf("* 5： 统计所有学生人数 *\n");
	printf("* 6： 查找学生信息 *\n");
	printf("* 7： 修改学生信息 *\n");
	printf("* 8： 删除学生信息 *\n");
	printf("* 0： 退出学生系统 *\n");
	printf("*----------------------------------------------------*\n");
	printf("---选择操作<0-8> \n");

}



void InputStu(void)
{
	Node *pNewNode =(Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;

	//头插法
	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;

	}
	else {
		pNewNode->pNext = g_pHead;
		g_pHead = pNewNode;

	}
	printf("请输入学生姓名：\n");
	scanf("%s", pNewNode->stu.name);
	printf("请输入学生年龄：\n");
	scanf("%d", &pNewNode->stu.age);
	printf("请输入学生学号：\n");
	scanf("%d", &pNewNode->stu.stuNUM);
	printf("请输入学生成绩：\n");
	scanf("%d", &pNewNode->stu.score);

	printf("学生信息录入完成\n");
	system("pause");
	system("cls");


}




void PrintfStu(void)
{
	printf("姓名：\t");	
	printf("年龄：\t");	
	printf("学号：\t");
	printf("成绩：\t\n");
	
	//遍历链表
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
	

	system("pause"); //停止再此，任意键继续
	system("cls");

}


void SaveStuInfo(void)
{
	//文件读写操作
	FILE* fp = fopen("D:\\C#\\stu.data", "w");
	if (fp == NULL)
	{
		printf("打开文件失败！ \n");
		return;

	}


	//遍历链表写入
	Node* p = g_pHead;
	while (p != NULL)
	{
		fwrite(&p->stu,1,sizeof(Student_info),fp);
		p = p->pNext;

	}



	fclose(fp);
	printf("写入数据成功！\n");
	system("pause"); 
	system("cls");
}









/*
修改日志：
	- 会出现 ： 屯屯屯屯屯屯屯屯屯屯屯屯屯屯屯屯屯屯屯屯屯屯屯?       的BUG
	解决方法：
	- 便通过建立一个缓存结构体stu存放读取流
	- 再通过memcpy复制到原链表上

*/
void ReadStuInfo(void)
{
	FILE* fp = fopen("D:\\C#\\stu.data", "r");
	if (fp == NULL)
	{
		printf("打开文件失败！ \n");
		return;
	}

	Student_info stu;

	//feof()是检测流上的文件结束符的函数，如果文件结束，则返回非0值，否则返回0
	//!feof(fp)
	//C 库函数 size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream) 
	//从给定流 stream 读取数据到 ptr 所指向的数组中。
	while (fread(&stu, 1, sizeof(Student_info), fp))
	{
		//创建新节点
		Node* pNewNode = (Node*)malloc(sizeof(Node));
		pNewNode->pNext = NULL;
		
		//修改日志对应的 fread(&pNewNode->stu, 1, sizeof(Student_info), fp);
		
		memcpy(pNewNode, &stu, sizeof(Student_info));

		//头插法
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
	printf("加载数据成功！ \n");
	system("pause"); 
	system("cls");
}



int TotalStu(void)
{
	int nCount = 0;

	//遍历
	Node* p = g_pHead;
	while (p != NULL)
	{
		nCount++;
		p = p->pNext;

	}
	return nCount;
	

}



/*

*函数 LookUpInfo(void)
* 目前待修改的BUG：
		请输入要查找的学生学号：
		1
		请输入要查找的学生姓名：
		lc
		姓名：  年龄：  学号：  成绩：
		hj      12121	131     131
	//12.4已修改
*/
Node* LookUpInfo(void)
{
	int nstuNum;
	char lokName[50];
	printf("请输入要查找的学生学号：\n");
	scanf("%d", &nstuNum);
	printf("请输入要查找的学生姓名：\n");
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
	printf("请输入需要修改的学生信息的学号： \n");
	scanf("%d", &stuID);
	Node* p = g_pHead;
	while (p != NULL)
	{
		if (p->stu.stuNUM == stuID) {
			printf("请输入要修改的学生姓名，年龄，成绩：\n");
			scanf("%s %d %d", p->stu.name, &p->stu.age, &p->stu.score);
			printf("修改成功！\n");
			break;
		}
		p = p->pNext;

	}
	if (p == NULL)
	{
		printf("未找到该学生！请重试 \n");

	}

}




void DelStu(void)
{
	int nStuID;
	printf("请输入要删除的学生的学号：\n");
	scanf("%d", &nStuID);
	Node* p1, *p2;

	//判断是否为头节点
	if (g_pHead->stu.stuNUM == nStuID) {
		p1 = g_pHead;
		g_pHead = g_pHead->pNext;
		free(p1);
		system("pause");
		system("cls");
		return;

	}

	//非头节点
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
		printf("未找到该学生信息！\n");
	}


	system("pause");
	system("cls");
}






























