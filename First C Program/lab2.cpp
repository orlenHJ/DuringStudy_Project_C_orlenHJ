#include<stdio.h>
#include<math.h>
#pragma warning( disable : 4996 )

int main() {
	float a, b, c;
	float r1, r2;
	long double  z, x;
	float D;
	printf("�������Ԫһ�η��̶�Ӧ��a, b, c\n");
	scanf("%f %f %f", &a, &b, &c);
	D = b * b - 4 * a * c;
	if (D >= 0) {
		r1 = (-1 * b + sqrt(D)) / (2 * a);
		r2 = (-1 * b - sqrt(D)) / (2 * a);
		printf("һʵ��Ϊ %f \n",r1);
		printf("��һʵ��Ϊ %f \n",r2);
	}
	else if (D < 0) {
		printf("���̴������\n");
		z = (-1 * b) / (2 * a * 1.0); //ʵ��       
		x = (sqrt(-D)) / (2 * a * 1.0); //�鲿
		printf("һ���Ϊ %lf + %lfi \n", z, x);
		printf("��һ���Ϊ %lf - %lfi \n", z, x);
		
	}
	getchar();
	return 0;

}