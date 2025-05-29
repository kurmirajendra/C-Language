#include<stdio.h>
int main()
{
    int number[50],i,size,sumeven=0,sumodd=0;
    printf("\nEnter size of an array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0;i<size;i++)
    {
        if(number[i]%2==0)
        {
            sumeven+=number[i];
        }
    }
    for(i=0;i<size;i++)
    {
        if(number[i]%2!=0)
        {
            sumodd+=number[i];
        }
    }
    printf("\nThe sum of even Integer is:%d ",sumeven);
    printf("\nThe sum of odd Integer  is:%d ",sumodd);
}
