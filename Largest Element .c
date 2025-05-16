#include<stdio.h>
int main()
{
    int  arr[50],n,i,max;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The largest element is:%d\n",max);
    return 0;
}
