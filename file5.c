#include<stdio.h>
int main()
{
    int firstNum,secondNum,thirdNum;
    printf("enter number 1 :");
    scanf("%d",&firstNum);
    printf("enter the number2:");
    scanf("%d",&secondNum);
    thirdNum = firstNum;
    firstNum=secondNum;
    secondNum = thirdNum;
    printf("the value of  a and b is %d,%d",firstNum,secondNum);
    return 0;


}