#include<stdio.h>
int  getCheckPalindrome(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            return 0;
        }
        start++;
        end--;

    }
    return 1;
}
void main()
{
    int arr[]={1,2,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nArray ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    int result=getCheckPalindrome(arr,size);
    if(result==1)
    {
        printf("\nArray is a palindrome .\n");
    }
    else
    {
        printf("\nArray is not a palindrome.\n");
    }
}
