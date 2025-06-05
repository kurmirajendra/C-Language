#include<stdio.h>
 void getSquare(int n)
 {
     for(int i=1;i<=n;i++){

        int res=i*i;
        if(res>n)
            break;
        printf("%d ",res);
     }
 }
 void main()
 {
     int n;
     printf("Enter the value of N: ");
     scanf("%d",&n);
     printf("\nPerfect Square Number between 1 to %d :\n",n);
     getSquare(n);
 }
