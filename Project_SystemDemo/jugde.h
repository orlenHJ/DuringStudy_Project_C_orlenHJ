#ifndef _JUDGE_H_
	#define _JUDGE_H
#endif


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



typedef struct _StuData
{
	char name[50];
	int age;
	int stuNUM;
	int score;


}Student_info;

typedef struct _Node  //�ڵ�
{
	Student_info stu;
	struct _Node* pNext; //ָ����һ�������ڵ��ָ��


}Node;

Node* g_pHead = NULL; //ͷ�ڵ�




void menuWelcome(void);
void InputStu(void);
void PrintfStu(void);
void SaveStuInfo(void);
void ReadStuInfo(void);
int TotalStu(void);
Node* LookUpInfo(void);
void ModifyStu(void);
void DelStu(void);




















#pragma once
