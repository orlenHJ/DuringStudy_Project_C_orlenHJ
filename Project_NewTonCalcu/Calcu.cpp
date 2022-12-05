#include "stdio.h"
#include "math.h"

float F_x(float x)
{
	return ((x * x * x) + (5 * x * x) + sin(x) + (2 * x) + 5);
}
float G_x(float x) //fx的导数
{
	return ((3 * x * x) + (10 * x) + cos(x) + 2);
}

void main()
{
	float err, xnow = 0, x1ast;
	printf("Input Err : \n");
	scanf_s("%fl", &err);
	for (;;)
	{
		x1ast = xnow;
		xnow = x1ast - (F_x(x1ast) / G_x(x1ast));
		if (fabs((xnow - x1ast)) < err) { break; }
	}

	printf("其中一方程解为x = %fl", x1ast);
}


















