//
#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i=i+1)
    {
        sum = sum+i;
    }
    printf("the sum of all numbers form 1 to %d is %d",n,sum);
     return 0;

}