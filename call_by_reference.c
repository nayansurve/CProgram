#include<stdio.h>
void fun(int *,int *);
void main()
{
    int x,y;
    x=5,y=7;
    fun(&x,&y);
    printf("\n x=%d,y=%d",x,y);
}
 void fun(int *a,int *b)
 {
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
     printf("\n a=%d,b=%d",*a,*b);
 }
