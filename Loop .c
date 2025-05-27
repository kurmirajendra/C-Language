#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    printf("Numbers from 1 to %d\n",num);
    for(i=0;i<=num;i++)
        printf("%d ",i);
    printf("\n");
    return 0;
}
