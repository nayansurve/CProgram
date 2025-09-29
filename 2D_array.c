#include<stdio.h>
void main()
{
   int a[3][3];
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {

           printf("Enter a[%d][%d]:",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   printf("\n****Array Elements Are:****\n");
   for(int i=0;i<3;i++)
   {

       printf("\n");
       for(int j=0;j<3;j++)
       {
           printf("%d\t",a[i][j]);
       }
   }
}
