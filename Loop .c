#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    printf("Numbers from 1 to %d\n",n);
    for(i=0;i<=n;i++)
        printf("%d ",i);
    printf("\n");
    return 0;
}
