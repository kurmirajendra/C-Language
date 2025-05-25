#include<stdio.h>
int main()
{
    int arr[50],n,i,pos,value;

    printf("Enter elements in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter position to insert(0 to %d) ",n);
    scanf("%d",&pos);



     if(pos<=n)
     {
          printf("Enter value to insert:\n ");
          scanf("%d",&value);

          for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[pos]=value;
        n++;
        printf("Array after insertion:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }

     }
     else
     {
         printf(" \nInvalid Position ");
         printf("\nEnter position to insert(0 to %d) ",n);
     }



        return 0;

}
