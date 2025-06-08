#include<stdio.h>

int factorial(int num){

if(num==1||num==0)
    return 1;
    return num*factorial(num-1);
    }
    int getcatalan(int n)
    {
        return factorial(n*2)/(factorial(n+1)*factorial(n));
    }
void main()
{
    int n;
    printf("Enter the number of term (N): ");
    scanf("%d",&n);

    printf("\nCatalan number up to %d term : ",n);
    for(int i=0;i<n;i++)
        printf("%d ",getcatalan(i));
}
