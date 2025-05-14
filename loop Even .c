#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a positive number ");
    scanf("%d",&n);

    printf("Even number from 1 to %d are\n ",n);
    for(i=1;i<=n;i++){
        if(i%2==0)
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
