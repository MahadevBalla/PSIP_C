#include <stdio.h>

int main()

{

int num1,num2;

printf("Enter two numbers :");

scanf("%d", &num1);

scanf("%d", &num2);

printf("The first number is %d and the second number is %d\n",num1,num2);

printf("The result of sum of these two numbers is : %d\n",num1+num2);

printf("The result of difference of these two numbers is : %d\n",num1-num2);

printf("The result of multiplication of these two numbers is : %d\n",num1*num2);

printf("The quoutient of division of these two numbers is : %d\n",num1/num2);

printf("The remainder of division of these two numbers is : %d\n",num1%num2);

return 0;

}