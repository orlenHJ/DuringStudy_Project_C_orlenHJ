#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>

#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
#pragma warning(disable:4996) //���C6031����Ĵ���
//MOOCĽ�� C����ѧϰ��ϰ

#define DENSUTY 62.4  //���������ܶ�
#define PRAISE "You are an extraordinary being"
#define PI 3.14
#define sprr(i) i*i
#define NAVI(x) ((x)*66) //�궨��ÿһ�㶼Ҫ���� ��xΪ����ú���ֱ���滻��
//int MAX(int k, int l);
//int MAX(int k,int l) {
//	int a;
//	k > l ? a = k : a = l;
//	return a;
//}


struct Ppoint{
	int *x;
	int *y;

}p2 , p1;

struct date {
	int month;
	int day;
	int year;
};

//bool isLeap(struct date d);
//int numberOf(struct date d);

struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

/* �������� */
//void printBook(struct Books* book);

typedef int Length;
typedef struct aDate {
	int day;
	int month;
	int year;

}datey;

union Data {
	int i;
	float f;
	char srt[20];
};


struct packed_struct {
	unsigned int f1 : 1;
	unsigned int f2 : 1;
	unsigned int f3 : 1;
	unsigned int f4 : 1;
	unsigned int type : 4;
	unsigned int my_int : 9;
} pack;

/*int main()
{
	//Length i = 0;
	//datey now = { 18,9,2022 };  //��datey������struct aDate
	//printf("%d/%d/%d\n", now.day, now.month, now.year);
	
	union Data data;

	data.i = 10;
	data.f = 16.8;
	strcpy(data.srt, "C Programming");

	printf("data.i : %d\n", data.i);
	printf("data.f : %f\n", data.f);
	printf("data.srt : %s\n", data.srt);
	//����Ϊ�����������
	//data.i : 1917853763
	//data.f : 4122360580327794860452759994368.000000
	//data.srt : C Programming
	//������� i �� f ��Ա��ֵ���𻵣���Ϊ��󸳸�������ֵռ�����ڴ�λ��

	data.i = 10;
	printf("data.i : %d\n", data.i);

	data.f = 220.5;
	printf("data.f : %f\n", data.f);

	strcpy(data.srt, "C Programming");
	printf("data.str : %s\n", data.srt);
	//data.i : 10
	//data.f : 220.500000
	//data.str : C Programming
	//��Ա��������������Ϊͬһʱ��ֻ�õ�һ����Ա��



	getchar();
	return 0;




}*/

//void main() {
	//printf("%s\n", __FILE__);
	//printf("%d\n", __LINE__); //�˴�Ϊ�ڼ���
	//printf("%s\n", __DATE__); //����
	//printf("%s\n", __TIME__); //ʱ��
	//int k;
	//scanf_s("%d", &k);
	//printf("sprr = %d", sprr(k)); //#define sprr(i) i*i

	//int i = 5;
	//int k = 6;
	//p1.x = &i;
	//p2.x = &k;
	//printf("p1 - *x = %p", p1.x);
	//printf("p2 - *x = %p", p2.x);

	//float a;
	//scanf("%f", &a);
	//if ((int)a == a && a>= 0) {
	//	printf("YES\n");
	//}
	//else {
	//	printf("NO\n");
	//}
	////int a, b;
	////scanf_s("%d %d", &a, &b);
	////printf("MAX = %d", MAX(a, b));
	//int Times = 0;
	//double big, mid, little;
	//big = 1.0;
	//mid = 1.0;
	//little = 1.0;
	//while (big <= 5.0) {
	//	while (mid <= 5.0) {
	//		while (little <= 5.0) {
	//			printf("%f*%f*%f\n", big, mid, little);
	//			little++;
	//		}
	//		mid++;
	//		little = 0;
	//	}
	//	big++;
	//	mid = 0;
	//}

	//char a;
	//scanf("%c", &a);
	//printf("a = %c ", a);
	//char c;
	//printf("���ܵ��·�Ϊmar,may\n");
	//printf("�������������ĸ��\n");
	//scanf("%c", &c);
//}


/*int GYS(int a, int b);
int main()
{
	int n, i;
	int c = 1, d, e = 0, f, g, y;
	int m, z;
	scanf("%d\n", &n);
	int a[100], b[100];
	for (i = 0; i < n; i++)
	{
		scanf("%d/%d", &a[i], &b[i]);
		c *= b[i]; //ͨ��ʱͬ�˵���
	}
	for (i = 0; i < n; i++)
	{
		d = (c / b[i]) * a[i]; //����ͬʱ����ͨ�ֱ��
		e += d;
	}
	f = e / c;//���ܵ���������
	y = GYS(e, c);//����Ϊ����������ĺ���
	printf("%d", y);
	z = (e/y) % (c/y);
	m = c / y;
	if (f == 0) {
		printf("%d/%d", z, m);
	}
	else if (f != 0 && z != 0) {
		printf("%d %d/%d", f, z, m);
	}else if(z == 0) {
		printf("%d",f);
	}
	return 0;
}

int GYS(int a, int b) 
{
	//����Ϊ����������ĺ���
	int t = 0;
	while (a % b) {
		t = a % b;
		a = b;     
		b = t;    
	}
	return b;
}*/

/*���Ͼ�Ϊ��ϰ���루��ע�ͣ�*/



float Cal(float a, char c, float b) {
	switch (c)
	{
	case '+': return (a + b);
		break;
	case '-': return (a - b);
		break;
	case '*': return (a * b);
		break;
	case '/':
		if (b == 0) { printf("������Ч����ĸ����Ϊ�㣡\n"); return 0; }
		return  (a / b);
		break;
	default: printf("�����������������룡\n");

	}


}

int main()
{
	char ss1[100] = "�Ž�";
	char ss2[100] = "������";
	char ss3[100] = "���";
	if (strcmp(ss1, ss3) == 0) { printf("s1=s2\n"); }
	if (strcmp(ss1, ss3) > 0) { printf("s1>s2\n"); }
	if (strcmp(ss1, ss3) < 0) { printf("s1<s2\n"); }
	return 0;











}
























