#include <stdio.h>

int fib(int n)
{
 if(n==1)
  {
   return 0;
  }
 else if(n==2)
  {
   return 1;
  }
 else
  {
   return fib(n-1)+fib(n-2);
  }
}

int main ()
{
 int num;
 printf("Enter index of fibonacci series : ");
 scanf("%d",&num);
 printf("The number %d is present at index %d in the fibonacci series.\n", fib(num), num);
 
 return 0;
  
}
