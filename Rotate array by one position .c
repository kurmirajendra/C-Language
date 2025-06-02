#include<stdio.h>
int main()
{
    int arr[50],n,i,first;
    printf("Enter elements in array: ");
    scanf("%d",&n);

     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     first=arr[0];
     for(i=0;i<n-1;i++)
     {
         arr[i]=arr[i+1];
     }
     arr[n-1]=first;

     for(i=0;i<n;i++)
     {
         printf("\n%d",arr[i]);
     }
}
