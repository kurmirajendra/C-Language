#include<stdio.h>
#include<string.h>
int getfindcharacter(char str[],char ch,int len)
{
    for(int i=0;i<len;i++)
    {
        if(str[i]==ch){
            return i;
        }
    }
    return -1;
}
void main()
{
    char str[50],ch;
    printf("\nEnter a string ");
    scanf("%s",&str);
    int len=strlen(str);
    printf("\nEnter character to find : ");
    fflush(stdin);
    scanf("%c",&ch);
    int res=getfindcharacter(str,ch,len);
    if(res!=-1)
        printf("\nFound at index %d",res);
    else
        printf("\nNot Found!! ");
}
