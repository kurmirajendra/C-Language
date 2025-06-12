#include<stdio.h>
int getSumPositiveno(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}
void main()
{
    int arr[]={-2,4,2,-1,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=getSumPositiveno(arr,size);
    printf("\nSum of Positive Number : %d\n\n",result);
}
