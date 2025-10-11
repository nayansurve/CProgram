#include<stdio.h>
 struct student{
    int rollno;
    char name[20];
    float marks;
 };
 int main()
 {
     struct student s1,s2;
     printf("\n\t<<<<Students Data>>>>");
     {
         printf("\n\nEnter your Roll no,Name,Marks:");
         scanf("%d%s%f",&s1.rollno,&s1.name,&s1.marks);
     }
     printf("\n\t<<<<Students Record>>>>");
     {
         printf("\n\nRoll no:%d\n\nName:%s\n\nMarks:%f",s1.rollno,s1.name,s1.marks);
         printf("\n\n\t* * * * * * * * * * *");
     }
     printf("\n\t<<<<Students Data>>>>");
     {
         printf("\n\nEnter your Roll no,Name,Marks:");
         scanf("%d%s%f",&s2.rollno,&s2.name,&s2.marks);
     }
     printf("\n\t<<<<Students Record>>>>");
     {
         printf("\n\nRoll no:%d\n\nName:%s\n\nMarks:%f",s2.rollno,s2.name,s2.marks);
         printf("\n\n\t* * * * * * * * * * *");
     }

 }

