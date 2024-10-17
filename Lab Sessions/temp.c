#include <stdio.h>

int main()

{

float fahr,t;

printf("Enter temperature in degree celsius : ");

scanf("%f", &t);

fahr=t*(9.0/5.0)+32;

printf("Temperature in Fahrenheit is : %.2f", fahr);

return 0;

}

