#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<math.h>
#include <string.h>


#pragma warning(disable:4996) //���C6031����Ĵ���
void find_Bb(char* s, int* B, int* b); //Ѱ�Ҵ�Сд�����ĺ���
void main()
{
    char sss[100];
    char ss2[100];
    printf("�������ַ���1��\n");
    int n = 0, i;
    
    scanf("%s", &sss);  //gets_s(sss);
    for (i = 0; i <= 100; i++)
    {
        if (sss[i] == '\0')
            break;
        else
            n++;
    }
    printf("���ַ����ĳ���Ϊ��%d \n", n);
    int B, b;
    find_Bb(sss, &B,&b);
    printf("���ַ�����д����Ϊ%d��Сд����Ϊ%d \n", B, b);

    printf("���������ַ���2��\n");
    scanf("%s", &ss2);  //gets_s(ss2);
    int k = 0,l;
    l = n;
    for (;;) {
        if (ss2[k] == '\0') { break; }
        sss[l] = ss2[k];
        k++;
        l++; //kΪss2�ĳ���
    }
    sss[l] = '\0'; //��ʾ�ַ����Ľ���
    printf("%s  \n", sss);

    if (n > k) {
        printf("�ַ���1��С > �ַ���2��С \n");

    }else if(n < k){
        printf("�ַ���1��С < �ַ���2��С \n");
    
    }
    else {
        printf("�ַ���1��С = �ַ���2��С \n");
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
















