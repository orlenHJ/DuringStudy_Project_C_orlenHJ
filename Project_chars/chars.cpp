#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>


#pragma warning(disable:4996) //解决C6031问题的代码
void find_Bb(char* s, int* B, int* b); //寻找大小写数量的函数
void main()
{
    char sss[100];
    char ss2[100];
    printf("请输入字符串1：\n");
    int n = 0, i;
    
    scanf("%s", &sss);  //gets_s(sss);
    for (i = 0; i <= 100; i++)
    {
        if (sss[i] == '\0')
            break;
        else
            n++;
    }
    printf("该字符串的长度为：%d \n", n);
    int B, b;
    find_Bb(sss, &B,&b);
    printf("该字符串大写的数为%d，小写的数为%d \n", B, b);

    printf("请再输入字符串2：\n");
    scanf("%s", &ss2);  //gets_s(ss2);
    int k = 0,l;
    l = n;
    for (;;) {
        if (ss2[k] == '\0') { break; }
        sss[l] = ss2[k];
        k++;
        l++; //k为ss2的长度
    }
    sss[l] = '\0'; //表示字符串的结束
    printf("%s  \n", sss);

    if (n > k) {
        printf("字符串1大小 > 字符串2大小 \n");

    }else if(n < k){
        printf("字符串1大小 < 字符串2大小 \n");
    
    }
    else {
        printf("字符串1大小 = 字符串2大小 \n");
    }


}


void find_Bb(char* s, int* B, int* b) {
    int index1, index2;
    index1 = 0;
    index2 = 0;
    while (*s) {
        if (*s >= 'A' && *s <= 'Z') 
            index1++;
        else if (*s >= 'a' && *s <= 'z') 
            index2++;
        *s++;
    }
    *B = index1;
    *b = index2;
}
















