#include <stdio.h>

unsigned int factfind (int n)
{

unsigned int fact=1;
for (int i=1;i<=n;i++)
fact*=i;
return(fact);
//printf("Factorial of entered number is : %d",fact);

}

int main ()
{

int n;
printf ("Enter a number : ");
scanf("%d",&n);
unsigned int ans = factfind(n);
printf("Factorial of the entered number is : %u\n",ans);
return 0;

}
