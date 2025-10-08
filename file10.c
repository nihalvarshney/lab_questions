//  xyz
#include<stdio.h>
int main()
{ 
   float m1,m2,m3,m4,m5;
    float per,sum;
    printf("enter the marks in subject 1:");
    scanf("%f",&m1);
    printf("enter the marks in subject 2:");
    scanf("%f",&m2);
    printf("enter the marks in subject 3:");
    scanf("%f",&m3);
    printf("enter the marks in subject 4:");
    scanf("%f",&m4);
    printf("enter the marks in subject 5:");
    scanf("%f",&m5);
    sum = m1 + m2 + m3 +m4+ m5 ;
    per = sum/5;
    printf("the sum = %2f\n",sum);
    printf("the percantage of five numbers is = %2f\n ",per);
    if (per > 90.0 & per <100.0)
    {printf("A\n");
    }
    else if (per >80.0 & per < 90.0)
    {
        printf("B\n");
    }
    else 
    {printf("C");}


    return 0;
}