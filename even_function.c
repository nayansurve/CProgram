#include<stdio.h>
int even(int );
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
}
int even(int n)
{
    if(n==2)
        {
        printf("The number is even");
    }
    else{
        printf("The number  is odd");
    }
    return 0;
}
