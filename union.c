#include<stdio.h>
union abc{
  int a;
  char b;
  float c;
};
int main()
{
    union abc u;
    u.a=10;
    u.b='A';
    u.c=4.2;
    printf("\n%d",u.a);
    printf("\n%c",u.b);
    printf("\n%f",u.c);
}
