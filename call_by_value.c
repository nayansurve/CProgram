#include<stdio.h>
void fun(int,int);
void main()
{
    int x,y;
    x=5,y=7;
    fun(x,y);
    printf("\n x=%d,y=%d",x,y);
}
 void fun(int x,int y)
 {
     x=7,y=5;
     printf("\n x=%d,y=%d",x,y);
 }
