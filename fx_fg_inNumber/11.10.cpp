#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>


#pragma warning(disable:4996) //���C6031����Ĵ���

int f(int a, int b) { //���Լ��
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;

}

int g(int a, int b) { //��С������
	int index,out = 0;
	for (index = a; index <= a * b; index++) {
		if ((index % a == 0) && (index % b == 0)) { out = index; break; }
	}
	return out;

}
int inNumber(char in[])
{
	scanf("%s", in);
	getchar(); //����س�����
	int i = 0,fin = 0,out = 0;
	while (in[i] != '\0')
	{
		if ('0' > in[i] || in[i]> '9')
		{
			fin++;
		}
		i++;
	}
	if (in[0] == '-') {
		printf("Erorr! ���ٴ����룺 \n");
		inNumber(in);
	}
	else if (fin != 0) {

		printf("Erorr! ���ٴ����룺 \n");
		inNumber(in);
	}
	printf("����Ϸ���\n");
	i = 0;
	while (in[i] != '\0')
	{
		out = out * 10 + int(in[i] - '0') ;
		i++;
	}
	return out;
}


void main()
{
	int a, b,c_f,d_g;
	//char num1[100];
	//char num2[100];
	//printf("%d", f(15, 30));
	//printf("%d", g(15, 30));
	//scanf("%s", &num);
	//inNumber(num);
	/*int ii = 0,k =0;
	char ss[] = "12324";
	while (ss[k] != '\0')
	{
		ii = ii * 10 + int(ss[k] - '0');
		k++;
	}
	printf("%d", ii);*/
	char num1[100];
	char num2[100];
	printf("������������������\n");
	a = inNumber(num1);
	b = inNumber(num2);
	c_f = f(a, b);
	d_g = g(a, b);
	printf("a = %d \n", a);
	printf("b = %d \n", b);
	printf("c = %d \n", c_f);
	printf("d = %d \n", d_g);
}




















