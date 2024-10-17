#include<stdio.h>

int exponent(int n1, int n2)
{
 if(n1==0 && n2==0)
 {
  printf("Indeterminant form");
 }
 else if(n2==0)
 {
  return 1;
 } 
 else
 {
  return n1*exponent(n1,n2-1);
 }
}

int main()
{
 int num1,num2;
 printf("Enter base : ");
 scanf("%d", &num1);
 printf("Enter power : ");
 scanf("%d", &num2);
 printf("Factorial of the entered number is : %d\n", exponent(num1,num2));
 
 return 0;
}
