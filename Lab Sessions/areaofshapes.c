#include <stdio.h>

int main ()

{

int x;
float l,br, h,b,r;

do {

printf("\n1.Area of circle \n2.Area of Rectangle \n3.Area of Triangle \n4.Exit \nEnter your choice :");

scanf("%d", &x);

switch(x) 

{

case 1:
printf("Enter radius :");
scanf("%f",&r);
printf("Area of circle is %.2f\n",3.14*r*r);
break;

case 2:
printf("Enter length :");
scanf("%f",&l);
printf("Enter breadth :");
scanf("%f",&br);
printf("Area of rectangle is %.2f\n",l*br);
break;

case 3:
printf("Enter height :");
scanf("%f",&h);
printf("Enter base :");
scanf("%f",&b);
printf("Area of triangle is %.2f\n",0.5*b*h);
break;

case 4:
printf("Thank you !!\n");
break;

default : 
printf("Wrong Choice !!\n");

}

} 

while(x!=4);

return 0;

}