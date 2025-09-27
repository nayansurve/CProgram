#include<stdio.h>
struct Employee{
    char name[50];
    int id;
    int age;
    char gender[20];
};
int main()
{
    struct Employee emp1;
    printf("\nEnter the name :");
    scanf("%s",&emp1.name);

    printf("\nEnter the id:");
    scanf("%d",&emp1.id);

    printf("\nEnter the age:");
    scanf("%d",&emp1.age);

    printf("\nEnter the gender:");
    scanf("%s",&emp1.gender);

    printf("\n\t<<<<Employee Details>>>>");

    printf("\nName:%s",emp1.name);
    printf("\nId:%d",emp1.id);
    printf("\nAge:%d",emp1.age);
    printf("\nGender:%s",emp1.gender);

    return 0;

}
