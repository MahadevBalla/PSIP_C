#include<stdio.h>

int sumrec(int n)
{
 if(n==1)
 {
  return 1;
 }
 else
 {
  return n+sumrec(n-1);
 }
}

int main()
{
 int num;
 printf("Enter a number : ");
 scanf("%d", &num);
 printf("Sum of series is : %d\n", sumrec(num));
 
 return 0;
}
