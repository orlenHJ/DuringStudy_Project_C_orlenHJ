#include <stdio.h>
//#include<time.h>
#include<math.h>
//#define _CRT_SECURE_NO_WARININGS
#pragma warning( disable : 4996 )


int main()
{
 
	//����ע�;�Ϊ���Դ���
	//printf("a = %f\n", a);
	/*b = (int)a;
	printf("b = %d\n", b);*/
	//if (floor(a + 0.5) == a) {
	//	printf("YES\n");
	//}
	//else {
	//	printf("NO\n");
	//}

	int b;
	float a;
	printf("��������ݣ�\n");
	scanf("%f", &a);

	
	if ((int)a == a && a >= 0) {
		//printf("Ϊ����\n");
		b = (int)a;
		if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0)) {
			printf("���������� %d Ϊ���꣡\n",b);

		}
		else {
			printf("���������� %d ��Ϊ���꣡\n",b);
		}
	}
	else {
		printf("ERROR��\n");
	}

	return 0;



}