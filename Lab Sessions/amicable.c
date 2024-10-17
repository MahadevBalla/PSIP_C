#include <stdio.h>

int sumfactorial(int n);

int main()
{

int n1, n2;
printf("Enter two numbwers to check if they are amicable or not :");
scanf("%d %d",&n1,&n2);
int ans1 = sumfactorial(n1);
int ans2 = sumfactorial(n2);
if(ans1==ans2)
printf("%d and %d are amicable numbers",n1,n2);
else
printf("%d and %d are not amicable numbers",n1,n2);
return 0;

}

int sumfactorial(int x)
{
int sum=0;
for(int i=1;i<=x;i++)
{ if ((x%i) == 0)
{ sum+=i;}
}
printf("Sum is : %d\n",sum);
return(sum);
}
