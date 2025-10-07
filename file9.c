//check the year is leap year or not 
#include<stdio.h>
int main()
{
    int days;
    printf("enter the days in one year:");
    scanf("%d",&days);
    if (days==366)
    {
        printf("it is leap year");
    }
    else if(days==365) 
    { 
        printf("it is not leap year");


    }
    else 
    {
        printf("try a valid days in one year");
    }
    return 0;




} 