#include<stdio.h>
int main()
{
    int arr[20],n,i;
    int pos=0,neg=0,zero=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    if(arr[i]>0)
        pos++;
    else if(arr[i]<0)
        neg++;
        else
          zero++;
    }
    printf("Positive numbers:%d\n",pos);
    printf("Negative numbers:%d\n",neg);
    printf("Zeros:%d\n",zero);

    return 0;
}
