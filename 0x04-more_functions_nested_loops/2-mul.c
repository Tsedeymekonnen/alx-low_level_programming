#include <stdio.h>
#include <stdlib.h>
/*  
Write a function that multiplies two integers.
*/

int mul(int a , int b);
int main()
{
 printf("%d\n", mul(98, 1024));
 printf("%d\n", mul(-402, 4096));
int num1,num2,product;//variable declaration

printf("Enter the two number ");

product=mult (num1,num2);

printf("The product of these numbers :%d",product);
//display the product value
getch();
return 0;
}
int mul(int a, int b)
{
int result=a*b;

return result;//returning result
}
