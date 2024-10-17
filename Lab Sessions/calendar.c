#include <stdio.h>

int main()

{

int N,Y,M,W,RD;

printf("Enter number of days :");

scanf("%d",&N);

Y=N/365;

M=(N%365)/30;

W=((N%365)%30)/7;

RD=((N%365)%30)%7;

printf("%d years %d months %d days",Y,M,RD);

//printf("%d years %d months %d weeks %d days",Y,M,W,RD);

return 0;

}