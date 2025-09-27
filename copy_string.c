#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    char str2[20];
    printf("Enter a string:");
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("\nCopied string:%s\n",str2);
}
