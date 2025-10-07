// calculate percentage and find sum of five numbers
#include<stdio.h>
int main()
{ 
   int m1,m2,m3,m4,m5,sum;
    float per;
    printf("enter the marks in subject 1:");
    scanf("%d",&m1);
    printf("enter the marks in subject 2:");
    scanf("%d",&m2);
    printf("enter the marks in subject 3:");
    scanf("%d",&m3);
    printf("enter the marks in subject 4:");
    scanf("%d",&m4);
    printf("enter the marks in subject 5:");
    scanf("%d",&m5);
    sum = m1 + m2 + m3 +m4+ m5 ;
    per = sum/5;
    printf("the sum = %d\n",sum);
    printf("the percantage of five numbers is = %f ",per);
    return 0;
}