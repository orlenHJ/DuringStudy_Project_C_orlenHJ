#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996) //解决C6031问题的代码

/*翻转顺序函数*/
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
/*封装输入函数*/
int get_inNumber(char in[]) 
{
	scanf("%s", in);
	getchar();
	return 0;
}
/*备份字符串函数*/
void cpy_chars(char in[], char out[])
{
	int i = 0;
	while (in[i] != '\0')
	{
		out[i] = in[i];
		i++;
	}
	out[i] = '\0';


}



void main() 
{
	char Numbers[100];
	char Numbers_last[100];
	get_inNumber(Numbers);
	cpy_chars(Numbers, Numbers_last); //备份
	//printf("%s\n", Numbers_last);测试
	rollback_array(Numbers);
	//printf("%s\n", Numbers);
	if (strcmp(Numbers_last, Numbers) == 0) {
		printf("是回文结构！\n");
	}
	else {
		printf("不是回文结构！\n");
	}



}
















