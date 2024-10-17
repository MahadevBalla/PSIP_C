#include <stdio.h>

int main ()

{

int n,cnt=0,x;

printf("Enter a number :");

scanf("%d",&n);

while(n!=0)

{

printf("%d",n%10);

n=n/10;

cnt++;

}

printf("\nNumber of digits in the entered number : %d",cnt);

return 0;

}