#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>


char rx_f[5];
char results[5][5];
//输出的char out[]的倒序是真实的十六进制
void Trans10216(int n, char out[]) {
	static int index = 0,poket = 0;
	
	if (n < 16) {
		if (n < 10) {
			out[index] = n + '0';
		}
		else {
			out[index] = (n - 10) + 'A';
		}
		out[index + 1] = '\0';
	}
	else {
		
		poket = (n % 16);
		n /= 16;
		if (poket < 10) {
			out[index] = poket + '0';
		}
		else {
			out[index] = (poket - 10) + 'A';
		}
		index++;
		Trans10216(n, out);
			
	}
	index = 0; //重置index归零
}
void rollback_array(char arr[])
{
	char tmp = arr[0];
	int len = strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (strlen(arr + 1) >= 2)
	{
		rollback_array(arr + 1);
	}
	arr[len - 1] = tmp;


}


int main()
{
	srand(time(NULL));
	//int rd_num = rand();
	int numbers[5] = {0};
	
	int k;
	for (k = 0; k < 5; k++) { //生成随机数数组
		numbers[k] = rand() % 65535;
	}
	printf("/**********************/\n");
	int i, j, a;
	for (i = 0; i < 5; i++) {
		
		a = numbers[i];
		Trans10216(a, results[i]);
		rollback_array(results[i]); //反转顺序函数
		printf("%d\t-10to16->  %s  \n", a, results[i]);
	}
	printf("/**********************/\n");

	//调试
	/*int rd_num = numbers[0];
	Trans10216(rd_num, rx_f);
	rollback_array(rx_f);
	printf("%d -10to16-> %s  \n", rd_num, rx_f);*/
	


	return 0;
}