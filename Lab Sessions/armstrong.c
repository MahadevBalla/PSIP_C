#include <stdio.h>
#include <math.h>

int main ()

{

int n,rem,cnt=0,x;
double sum=0;

printf("Enter a number :");

scanf("%d",&n);

x=n;

while (x>0)

{
	x/=10;
	cnt++;
}

x=n;

while(x>0)
{
	rem=x%10;
	sum+=pow(rem,cnt);
	x/=10;
	
}

printf("%d is a %d digit number.\n", n,cnt);

printf("Sum is %.2lf\n", sum);

if (sum==n)
	printf("%d is an Armstrong number.", n);
else 
	printf("%d is not an Armstrong number.", n);
return 0;

}