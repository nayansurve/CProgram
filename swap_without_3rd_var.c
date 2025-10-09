#include<stdio.h>
void fun(int,int);
void main()
{
    int a;
    int b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("\n * * * *BEFORE SWAPPING* * * *");
    printf("\n\n Value of a:%d",a);
    printf("\n Value of b:%d",b);
    fun(a,b);
}
 void fun(int a,int b)
 {   printf("\n\n\t * * * * * * * *");
     a=a+b;
     printf("\n\n Value of a:%d",a);
     b=a-b;
     a=a-b;
     printf("\n\n * * * *AFTER SWAPPING* * * *");
     printf("\n\n Value of a:%d",a);
     printf("\n Value of b:%d",b);

 }

