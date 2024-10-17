#include <stdio.h>
#include <math.h>

int main()

{

float a, rad;

const float PI=3.14159;

printf("Enter the angle in degrees : ");

scanf("%f",&a);

rad=a*(PI/180.0);

printf("sin(%f) = %.f\n",a,sin(rad));

printf("cos(%f) = %.f\n",a,cos(rad));

return 0;

}
