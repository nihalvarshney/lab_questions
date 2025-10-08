//wap to take two input from user perform the operation and print result by using switch statement
#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter the character value:");
    scanf("%c",&op);
    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);
    switch (op)
    {
        case '+':
        printf("the sum of number %d and %d is %d",a,b,a+b);
        break;
        case '-':
        printf("the subtract  of number %d and %d is %d",a,b,a-b);
        break;
        case '*':
        printf("the sum of number %d and %d is %d",a,b,a*b);
        break;
        case '/' :
        if (b!=0)
        printf("division = %d",a/b);
        else 
        break;
        case '%' :
        printf("modulus = %d",a%b);
        break;
        default:
        printf("operator is invalid");
    }
        return 0;
        
    

        


        
    

}