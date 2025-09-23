#include<stdio.h>
void main()
{
    char name[10],*ch;
    printf("Enter a String ");
    scanf("%s",&name);
    ch=name;
    printf("\nName %s",name);
    printf("\nCh %s",ch);
    ch++;
    printf("\nCh %s",ch);

}
