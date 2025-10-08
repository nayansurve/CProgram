#include<stdio.h>
void fun(int *a)
{
   int b;
   b= *a * *a;
   printf("%d",b);
}
 int main()
 {
     int a;
     printf("\n Enter the value of a:");
     scanf("%d",&a);
     printf("\n Square of a:");
     fun(&a);
}
