#include<stdio.h>
#include<math.h>
#pragma warning( disable : 4996 )

int main() {
	float a, b, c;
	float r1, r2;
	long double  z, x;
	float D;
	printf("请输入二元一次方程对应的a, b, c\n");
	scanf("%f %f %f", &a, &b, &c);
	D = b * b - 4 * a * c;
	if (D >= 0) {
		r1 = (-1 * b + sqrt(D)) / (2 * a);
		r2 = (-1 * b - sqrt(D)) / (2 * a);
		printf("一实根为 %f \n",r1);
		printf("另一实根为 %f \n",r2);
	}
	else if (D < 0) {
		printf("方程存在虚根\n");
		z = (-1 * b) / (2 * a * 1.0); //实部       
		x = (sqrt(-D)) / (2 * a * 1.0); //虚部
		printf("一虚根为 %lf + %lfi \n", z, x);
		printf("另一虚根为 %lf - %lfi \n", z, x);
		
	}
	getchar();
	return 0;

}