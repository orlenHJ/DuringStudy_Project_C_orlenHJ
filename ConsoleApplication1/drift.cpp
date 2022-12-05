





//输入变量练习
/*int price = 0;
printf("请输入:");
scanf("%d", &price);
int change = 100 - price;
printf("找你%d元。\n", change);*/

//分钟转换小时制
/*int mins = 0;
printf("请输入分钟:");
scanf("%d", &mins);
int hour = mins / 60;
int minsed = mins % 60;
printf("结果是 %d 小时 %d 分钟。\n", hour,minsed);*/

//一串数字计算位数
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
printf("结果是 %d 。\n", n);
return 0;*/

// for 循环执行
/*for (int a = 10; a < 20; a = a + 1)
{
	printf("a 的值： %d\n", a);
}

return 0; */


//电脑随机猜数
/*srand(time(0));
int a = rand();
int x;
int t;
a %= 100; //随机得到一个一百以内的数
printf("请输入:\n");
scanf("%d", &x);
while (x != a) {
	if (x > a) {
		printf("输入的数字大于目标数");
	}else if (x < a) {
		printf("输入的数字小于目标数");
	}
	printf("请再次输入：\n");
	scanf("%d", &t);
	x = t;

}
printf("成功！实际目标数为%d\n", a);
return 0;*/

//计算平均数项目
/*int sum;
int total = 0;
int n = 0;
for (;;) {
	printf("请输入(若要结束输入请输入“-1”) :\n");
	scanf("%d", &sum);
	if (sum == -1) {
		break;
	}
	total += sum;
	n++;
}
printf("结果平均数是 %f 。\n",1.0*total/n );*/

//强制类型转换
/*double A = 5.6;
int B = (int)A;
printf(" % d\n", B);*/


//bool逻辑类型 bool类型后加条件
/*bool a = 6 > 5;
printf(" % d\n", a);*/


//char类型
/*char a;
scanf("%c", &a);
if (a >= 'A' && a <= 'Z') {
	printf("字母是大写\n");
}
else {
	printf("字母是小写\n");
}*/

//逗号运算优先级
/*nt a;
a = 3 + 4, 5 + 6;
int b;
b = (3 + 4, 5 + 6);
printf("a = %d\n" , a);
printf("b = %d\n", b);
for （a = 0, b = 10; a < b; a++, b--）{

}*/

//函数定义与练习
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

//数组学习 - 找出大于平均数的值
//<类型（每个单元类型）>变量名称[元素数量（整数）]
// 最大有效数组下标x(a[x])为[元素数量-1],从0开始数数
//从C99开始可以用变量定义数组的元素数量
//数组中的特定元素可以通过索引访问，第一个索引值为 0
/*int x;
double sum = 0;
int cnt = 0;
int number[100];
scanf("%d", &x);
while (x != -1) {
	number[cnt] = x;
	//调试
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

//统计一组0~9输入数据中各个数据的个数
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
//{0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
//{4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
//{8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
//};

//int a[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };  与以上相同
/* 一个带有 5 行 2 列的数组
int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}	 };*/


/*int var_runoob = 10;
int* p;              // 定义指针变量
p = &var_runoob;

printf("var_runoob 变量的地址： %p\n", p);*/

//定义一个指针变量一个整型变量int*p,q;
//定义两个指针int* p, * q;
//用*来访问指针上的地址对应的变量 int k = *p; 此时*p就代表了k
//"*p"作为一个整体 
// int*p = &a;

/*int a = 5;
int b = 9;
swap(&a, &b);
printf("a=%d , b=%d\n", a, b);
return 0;*/
//函数参数表中的数组实际上是指针
//数组变量是特殊的指针
//a[]与 *a 都为指针 数组变量本身表达地址
//注意 int * const p = &i;     p不能变
//注意 const int *p = &i;     *p不能变
// 主要判断const在星号前边还是后边
//const数组必须 const int a[] ={1,2,3,4,5,}; 来赋值


/*int* ptr = NULL;

printf("ptr 的地址是 %p\n", ptr);

return 0;*/
//ptr 的地址是 0x0

//if (ptr)     /* 如果 p 非空，则完成 */
//if (!ptr)    /* 如果 p 为空，则完成 */
//把 p 赋值为 balance 的第一个元素的地址
/*double* p;
double balance[10];

p = balance;*/



//带有 5 个元素的整型数组
/*int balance[5] = {1000, 2, 3, 17, 50};
double avg;

//传递一个指向数组的指针作为参数
avg = getAverage(balance, 5);

// 输出返回值
printf("Average value is: %f\n", avg);

return 0;*/

// p 是函数指针
/*int (*p)(int, int) = &max; // &可以省略
int a, b, c, d;

printf("请输入三个数字:");
scanf("%d %d %d", &a, &b, &c);

/* 与直接调用函数等价，d = max(max(a, b), c) */
//d = p(p(a, b), c);

//printf("最大的数字是: %d\n", d);

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
char* p = strchr(s, 'l');//返回一个指针，指向字符串 s 中字符 l 的第一次出现的位置。
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
// 遍历枚举元素
for (day = MON; day <= SUN; day++) {
	printf("枚举元素：%d \n", day);
}*/

/*enum color { red = 1, green, blue, pink };

enum  color favorite_color;

printf("输入你的选择颜色1.red, 2.green, 3.blue, 4.pink \n ");
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

printf("请输入单词：\n");

scanf_s("%s", s2);
printf("你写入了%c\n", s2);

if (!strcmp(s1, s2)) {
	printf("你写入了正确单词\n");
}
else {
	printf("UNKONWN");
}
return 0;*/


/*float weight, volume;
int size, letters;

char name[50];
printf("Hi ！ what's your name ?\n");
scanf("%s", &name);
printf("Hi ！%s welconm! %s\n", name, PRAISE);
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
	printf("%d到%d的和为%d\n", begin, end, sum);
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
//数据交换函数

/*double getAverage(int* arr, int size) //*arr 表示为 balance[0]
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
printf("Hi ！ what's your name ?\n");
scanf("%s", &name); // %s表示字符串
printf("Hi ！%s welconm! %s\n", name, PRAISE);*/


//struct Books Book1;        /* 声明 Book1，类型为 Books */
//struct Books Book2;        /* 声明 Book2，类型为 Books */

///* Book1 详述 */    //strcpy将右边的字符串复制到左边
//strcpy(Book1.title, "C Programming");
//strcpy(Book1.author, "Nuha Ali");
//strcpy(Book1.subject, "C Programming Tutorial");
//Book1.book_id = 6495407;

///* Book2 详述 */
//strcpy(Book2.title, "Telecom Billing");
//strcpy(Book2.author, "Zara Ali");
//strcpy(Book2.subject, "Telecom Billing Tutorial");
//Book2.book_id = 6495700;

///* 通过传 Book1 的地址来输出 Book1 信息 */
//printBook(&Book1);

///* 通过传 Book2 的地址来输出 Book2 信息 */
//printBook(&Book2);

int max(int a, int b) {
	return a < b ? b : a;
}

