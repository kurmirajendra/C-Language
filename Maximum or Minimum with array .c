#include<stdio.h>
int main()
{
    int arr[50],n,i;
    int max,min;
    printf("Enter numbers of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&arr[i]);

    max=min=arr[0];

    for(i=1;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum  element:%d\n",max);
    printf("Minimum element:%d\n",min);
    return 0;
}
