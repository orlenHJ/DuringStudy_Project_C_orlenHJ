#include<stdio.h>
#pragma warning(disable:4996) //解决C6031问题的代码



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
		if (b == 0) { printf("输入错误，分母无效！\n"); return 0; }
		return  (a / b);
		break;
	default: printf("输入错误，请重新输入！\n");

	}
}
int main()
{
	float NUMa = 0, NUMb = 0 , fini;
	char Sc;
	scanf("%f %c %f", &NUMa, &Sc, &NUMb); //例 4 + 6
	fini = Cal(NUMa, Sc, NUMb);

	if (fini == 0.0) { printf("Error!"); }
	printf("%.2lf %c %.2lf = %.2lf", NUMa, Sc, NUMb, fini);

	return 0;
}




