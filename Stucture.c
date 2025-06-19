#include<stdio.h>
struct Student
{
    int rollno;
    char name[50];
};
void main()
{
    struct Student s1,s2;
    printf("\nRoll no ");
    scanf("%d",&s1.rollno);
    printf("\nName ");
    scanf("%s",&s1.name);

    printf("\nRoll no ");
    scanf("%d",&s2.rollno);
    printf("\nName ");
    scanf("%s",&s2.name);

    printf("\nRoll no %d",s1.rollno);
    printf("\nName %s",s1.name);

    printf("\nRoll no %d",s2.rollno);
    printf("\nName %s",s2.name);
}
