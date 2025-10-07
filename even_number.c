#include<stdio.h>
int main()
{
    int even;
    printf("Enter the limit:");
    scanf("%d",&even);

    printf("Even numbers upto %d are:",even);
    for(int i=2;i<=even;i+=2){
        printf("\n%d",i);
    }
}
