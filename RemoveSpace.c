#include<stdio.h>
#include<string.h>
void getRemoveSpace(char*str)
{
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' '){
            str[j++]=str[i];
        }
    }
    str[j]='\0';
}
void main()
{

    char str[50];
    printf("\nEnter a String: ");
    fgets(str,sizeof(str),stdin);

printf("\nString With Spaces: %s",str);
str[strcspn(str,"\n")]='\0';
getRemoveSpace(str);
printf("String without Spaces: %s",str);


       }
