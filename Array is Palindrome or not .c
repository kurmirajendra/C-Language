#include<stdio.h>
int main()
{
    int arr[50],n,i,isPalindrome=1;
    printf("Enter number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-1-i]){
           isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
        printf("The array is Palindrome.\n");
    else
        printf("The array is not Palindrome.\n");


}
