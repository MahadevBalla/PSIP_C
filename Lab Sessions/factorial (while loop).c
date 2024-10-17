#include <stdio.h>

int main()

{

int i,fac=1;

printf("Enter a whole number :");

scanf("%d", &i);

while(i>0)

{

fac=fac*i;

i--;

}

printf("%d \n",fac);

return 0;

}