#include<stdio.h>

int factrec(int n)
{
 if(n==1)
 {
  return 1;
 }
 else
 {
  return n*factrec(n-1);
 }
}

int main()
{
 int num;
 printf("Enter a number : ");
 scanf("%d", &num);
 printf("Factorial of the entered number is : %d\n", factrec(num));
 
 return 0;
}
