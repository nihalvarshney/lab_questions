//print area and circumference of circle 
#include<stdio.h>
int main()
{
    int r;
    float area,cir;
    printf("enter the radius:");
    scanf("%d",&r);
    area = 3.14*r*r;
    cir = 2*3.14*r;
    printf("the area and circumference of circle is %f and %f",area,cir);
    return 0;


}
