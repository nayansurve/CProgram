#include<stdio.h>
 struct student{
    int rollno;
    char name[20];
    float marks;
 };
 int main()
 {
     struct student s[3];
     printf("\n\t<<<<Students Data>>>>");
     for(int i=0;i<3;i++)
     {
         printf("\n\nEnter your Roll no,Name,Marks:");
         scanf("%d%s%f",&s[i].rollno,s[i].name,&s[i].marks);
     }
     printf("\n\t<<<<Students Record>>>>");
     for(int i=0;i<3;i++)
     {
         printf("\n\nRoll no:%d\n\nName:%s\n\nMarks:%f",s[i].rollno,s[i].name,s[i].marks);
         printf("\n\n\t* * * * * * * * * * *");
     }

 }

