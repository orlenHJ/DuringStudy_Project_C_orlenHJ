#include<stdio.h>
#pragma warning(disable:4996) //���C6031����Ĵ���



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
		if (b == 0) { printf("������󣬷�ĸ��Ч��\n"); return 0; }
		return  (a / b);
		break;
	default: printf("����������������룡\n");

	}
}
int main()
{
	float NUMa = 0, NUMb = 0 , fini;
	char Sc;
	scanf("%f %c %f", &NUMa, &Sc, &NUMb); //�� 4 + 6
	fini = Cal(NUMa, Sc, NUMb);

	if (fini == 0.0) { printf("Error!"); }
	printf("%.2lf %c %.2lf = %.2lf", NUMa, Sc, NUMb, fini);

	return 0;
}




