#include <stdio.h>
int main()
{
float centigrade,fahrenheit;

printf("Enter the tempreture in centigrade: ");
scanf("%f",& centigrade);
fahrenheit=9*(centigrade)/5+32;
printf("tempreture in fahrenheit is :%f",fahrenheit);

return 0;
}