





//���������ϰ
/*int price = 0;
printf("������:");
scanf("%d", &price);
int change = 100 - price;
printf("����%dԪ��\n", change);*/

//����ת��Сʱ��
/*int mins = 0;
printf("���������:");
scanf("%d", &mins);
int hour = mins / 60;
int minsed = mins % 60;
printf("����� %d Сʱ %d ���ӡ�\n", hour,minsed);*/

//һ�����ּ���λ��
/*int x;
int n = 0;
scanf("%d", &x);
n++;
x /= 10;
while (x > 0)
{
	n++;
	x /= 10;
}
printf("����� %d ��\n", n);
return 0;*/

// for ѭ��ִ��
/*for (int a = 10; a < 20; a = a + 1)
{
	printf("a ��ֵ�� %d\n", a);
}

return 0; */


//�����������
/*srand(time(0));
int a = rand();
int x;
int t;
a %= 100; //����õ�һ��һ�����ڵ���
printf("������:\n");
scanf("%d", &x);
while (x != a) {
	if (x > a) {
		printf("��������ִ���Ŀ����");
	}else if (x < a) {
		printf("���������С��Ŀ����");
	}
	printf("���ٴ����룺\n");
	scanf("%d", &t);
	x = t;

}
printf("�ɹ���ʵ��Ŀ����Ϊ%d\n", a);
return 0;*/

//����ƽ������Ŀ
/*int sum;
int total = 0;
int n = 0;
for (;;) {
	printf("������(��Ҫ�������������롰-1��) :\n");
	scanf("%d", &sum);
	if (sum == -1) {
		break;
	}
	total += sum;
	n++;
}
printf("���ƽ������ %f ��\n",1.0*total/n );*/

//ǿ������ת��
/*double A = 5.6;
int B = (int)A;
printf(" % d\n", B);*/


//bool�߼����� bool���ͺ������
/*bool a = 6 > 5;
printf(" % d\n", a);*/


//char����
/*char a;
scanf("%c", &a);
if (a >= 'A' && a <= 'Z') {
	printf("��ĸ�Ǵ�д\n");
}
else {
	printf("��ĸ��Сд\n");
}*/

//�����������ȼ�
/*nt a;
a = 3 + 4, 5 + 6;
int b;
b = (3 + 4, 5 + 6);
printf("a = %d\n" , a);
printf("b = %d\n", b);
for ��a = 0, b = 10; a < b; a++, b--��{

}*/

//������������ϰ
//cheer();

/*int a;
int b;
scanf("%d %d", &a, &b);
sum(10, 20);
sum(a, b);
return 0;*/

/*int c;
c = max(6, 22);
printf("c = %d\n", c);*/

//����ѧϰ - �ҳ�����ƽ������ֵ
//<���ͣ�ÿ����Ԫ���ͣ�>��������[Ԫ��������������]
// �����Ч�����±�x(a[x])Ϊ[Ԫ������-1],��0��ʼ����
//��C99��ʼ�����ñ������������Ԫ������
//�����е��ض�Ԫ�ؿ���ͨ���������ʣ���һ������ֵΪ 0
/*int x;
double sum = 0;
int cnt = 0;
int number[100];
scanf("%d", &x);
while (x != -1) {
	number[cnt] = x;
	//����
	{
		int i;
		printf("%d\t", cnt);
		for (i = 0; i <= cnt; i++) {
			printf("%d\t", number[i]);
		}
		printf("\n");
	}
	//
	sum += x;
	cnt++;
	scanf("%d", &x);
}
if (cnt > 0) {
	printf("%f\n", sum / cnt);
	int i;
	for (i = 0; i < cnt; i++) {
		if (number[i] > sum / cnt) {
			printf("%d\n", number[i]);
		}
	}
}
return 0;*/

//ͳ��һ��0~9���������и������ݵĸ���
/*const int number = 10;
int x;
int count[number] = {0};
int i;
//for (i = 0; i < 10; i++) {
//	count[i] = 0;
//}
scanf("%d", &x);
while (x != -1) {
	if (x >= 0 && x <= 9) {
		count[x] ++;
	}
	scanf("%d", &x);
}
for (i = 0; i < number; i++) {
	printf("%d:%d\n", i, count[i]);
}
return 0;*/

//type arrayName [ x ][ y ];
//int a[3][4] = {
//{0, 1, 2, 3} ,   /*  ��ʼ��������Ϊ 0 ���� */
//{4, 5, 6, 7} ,   /*  ��ʼ��������Ϊ 1 ���� */
//{8, 9, 10, 11}   /*  ��ʼ��������Ϊ 2 ���� */
//};

//int a[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };  ��������ͬ
/* һ������ 5 �� 2 �е�����
int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}	 };*/


/*int var_runoob = 10;
int* p;              // ����ָ�����
p = &var_runoob;

printf("var_runoob �����ĵ�ַ�� %p\n", p);*/

//����һ��ָ�����һ�����ͱ���int*p,q;
//��������ָ��int* p, * q;
//��*������ָ���ϵĵ�ַ��Ӧ�ı��� int k = *p; ��ʱ*p�ʹ�����k
//"*p"��Ϊһ������ 
// int*p = &a;

/*int a = 5;
int b = 9;
swap(&a, &b);
printf("a=%d , b=%d\n", a, b);
return 0;*/
//�����������е�����ʵ������ָ��
//��������������ָ��
//a[]�� *a ��Ϊָ�� ��������������ַ
//ע�� int * const p = &i;     p���ܱ�
//ע�� const int *p = &i;     *p���ܱ�
// ��Ҫ�ж�const���Ǻ�ǰ�߻��Ǻ��
//const������� const int a[] ={1,2,3,4,5,}; ����ֵ


/*int* ptr = NULL;

printf("ptr �ĵ�ַ�� %p\n", ptr);

return 0;*/
//ptr �ĵ�ַ�� 0x0

//if (ptr)     /* ��� p �ǿգ������ */
//if (!ptr)    /* ��� p Ϊ�գ������ */
//�� p ��ֵΪ balance �ĵ�һ��Ԫ�صĵ�ַ
/*double* p;
double balance[10];

p = balance;*/



//���� 5 ��Ԫ�ص���������
/*int balance[5] = {1000, 2, 3, 17, 50};
double avg;

//����һ��ָ�������ָ����Ϊ����
avg = getAverage(balance, 5);

// �������ֵ
printf("Average value is: %f\n", avg);

return 0;*/

// p �Ǻ���ָ��
/*int (*p)(int, int) = &max; // &����ʡ��
int a, b, c, d;

printf("��������������:");
scanf("%d %d %d", &a, &b, &c);

/* ��ֱ�ӵ��ú����ȼۣ�d = max(max(a, b), c) */
//d = p(p(a, b), c);

//printf("����������: %d\n", d);

/*char str1[14] = "runoob";
char str2[14] = "google";
char str3[14];
int  len;


strcpy(str3, str1);
printf("strcpy( str3, str1) :  %s\n", str3);


strcat(str1, str2);
printf("strcat( str1, str2):   %s\n", str1);


len = strlen(str1);
printf("strlen(str1) :  %d\n", len);

return 0;*/

/*char s[] = "hegshdfgsfllo";
char* p = strchr(s, 'l');//����һ��ָ�룬ָ���ַ��� s ���ַ� l �ĵ�һ�γ��ֵ�λ�á�
char c = *p;
*p = '\0';
char* t = (char*)malloc(strlen(s) + 1);
strcpy(t, s);
printf("%s\n", t);
free(t);

return 0;*/

/*enum DAY day;
day = WED;
printf("%d", day);
return 0;*/

/*enum DAY day;
// ����ö��Ԫ��
for (day = MON; day <= SUN; day++) {
	printf("ö��Ԫ�أ�%d \n", day);
}*/

/*enum color { red = 1, green, blue, pink };

enum  color favorite_color;

printf("�������ѡ����ɫ1.red, 2.green, 3.blue, 4.pink \n ");
scanf("%d", &favorite_color);
switch (favorite_color)
{
case red:
	printf("You like red!");
	break;
case green:
	printf("You like green!");
	break;
case blue:
	printf("You like blue!");
	break;
case pink:
	printf("You like pink!");
	break;
default:
	printf("Unkonwn color");
}*/



/*char s1[] = "AB";
char s2[3];

printf("�����뵥�ʣ�\n");

scanf_s("%s", s2);
printf("��д����%c\n", s2);

if (!strcmp(s1, s2)) {
	printf("��д������ȷ����\n");
}
else {
	printf("UNKONWN");
}
return 0;*/


/*float weight, volume;
int size, letters;

char name[50];
printf("Hi �� what's your name ?\n");
scanf("%s", &name);
printf("Hi ��%s welconm! %s\n", name, PRAISE);
*/




/*void cheer() {
	printf("cheer\n");
}*/

/*void sum(int begin, int end) {
	int i;
	int sum = 0;
	for (i = begin; i <= end; i++) {
		sum += i;
	}
	printf("%d��%d�ĺ�Ϊ%d\n", begin, end, sum);
}*/
/*int max(int a, int b) {
	int ret;
	if (a > b) {
		ret = a;
	}
	else {
		ret = b;
	}
	return ret;
}
void swap(int* pa, int* pb);*/
//���ݽ�������

/*double getAverage(int* arr, int size) //*arr ��ʾΪ balance[0]
{
	int    i, sum = 0;
	double avg;

	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	avg = (double)sum / size;

	return avg;
}


void swap(int* pa, int* pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}*/
/*float weight, volume;
int size, letters;

char name[50];
printf("Hi �� what's your name ?\n");
scanf("%s", &name); // %s��ʾ�ַ���
printf("Hi ��%s welconm! %s\n", name, PRAISE);*/


//struct Books Book1;        /* ���� Book1������Ϊ Books */
//struct Books Book2;        /* ���� Book2������Ϊ Books */

///* Book1 ���� */    //strcpy���ұߵ��ַ������Ƶ����
//strcpy(Book1.title, "C Programming");
//strcpy(Book1.author, "Nuha Ali");
//strcpy(Book1.subject, "C Programming Tutorial");
//Book1.book_id = 6495407;

///* Book2 ���� */
//strcpy(Book2.title, "Telecom Billing");
//strcpy(Book2.author, "Zara Ali");
//strcpy(Book2.subject, "Telecom Billing Tutorial");
//Book2.book_id = 6495700;

///* ͨ���� Book1 �ĵ�ַ����� Book1 ��Ϣ */
//printBook(&Book1);

///* ͨ���� Book2 �ĵ�ַ����� Book2 ��Ϣ */
//printBook(&Book2);

int max(int a, int b) {
	return a < b ? b : a;
}

