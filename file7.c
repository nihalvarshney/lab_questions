// greatest of three numbers
#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter the number 1:");
    scanf("%d",&A);
    printf("Enter the number 2:");
    scanf("%d",&B);
    printf("Enter the number 3:");
    scanf("%d",&C);
    if (A>B & A>C)
    {
    printf("A is greatest");
    }
    else if (B>C)
    {
        printf("B IS GREATEST");

    }
    else 
    {
        printf("C IS GREATEST");
    }
    return 0;
    





}