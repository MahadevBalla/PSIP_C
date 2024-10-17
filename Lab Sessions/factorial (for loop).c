#include <stdio.h>

int main ()

{

int n, fac=1;

printf("Enter a number :");

scanf("%d", &n);

for(;n>1;)

{

fac=fac*n;

n--;

}

printf("Factorial of entered number is : %d",fac);

return 0;

}