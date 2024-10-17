#include<stdio.h>
#include<math.h>

void print_primes(int s,int e);

int main()
{
 int s,e;
 printf("Enter the range of values : ");
 scanf("%d %d",&s,&e);
 print_primes(s,e);
 return 0;
}

 void print_primes(int start,int end)
 {
 int cnt=0;
 for (int i=start;i<=end;i++)
 {
   int j;
   for (j=2;j<=sqrt(i);j++)
      if (i%j==00)
      {
      break;
      }
      if (j>sqrt(i)&&i!=1)
        printf("%d, ",i);
      cnt++;
      if (cnt==10)
      {
      printf("\n");
      cnt=0;
      }
   }
}


