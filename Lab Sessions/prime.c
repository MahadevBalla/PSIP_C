#include <stdio.h>

int main ()

{

int n,cnt=1;

printf("Enter a number :");

scanf("%d",&n);

for(int i=2;i<=(n/2);i++)
{
	if(n%i==0)
	    cnt=0;
    
}
	if(cnt==0)
		printf("%d is not a prime number.", n);
	else
		printf("%d is a prime number", n);

return 0;

}