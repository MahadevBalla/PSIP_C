#include <stdio.h>
#include <math.h>

int main ()

{

int n=1,rem,cnt=0,x,y=1;
double sum=0;

for(int i=1;i<=1000;i++)
	
{

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

if (sum==n)
	y++;

n++;

}

printf("The number of Armstrong numbers between 1-1000 : %d", y);

return 0;

}