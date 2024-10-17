#include <stdio.h>
#include <string.h>
struct flight
	{
	char start[4];
	char dest[4];
	int starttime;
	int arrivaltime;
	int seats;
	};

int main()
	{
	struct flight fl[10];
	for(int i=0;i<3;i++)
		{
		printf("Enter starting destination: ");
		scanf("%s",fl[i].start);
		printf("Enter final destination: ");
		scanf("%s",fl[i].dest);
		printf("Enter departing time: ");
		scanf("%d",&fl[i].starttime);
		printf("Enter arrival time: ");
		scanf("%d",&fl[i].arrivaltime);
		printf("Enter number of Seat: ");
		scanf("%d",&fl[i].seats);
		printf("\n");
		}


	
	printf("\nmenu driven program starts");
	char strt[4],dst[4];
	int ans=1,flag=1,ans2=0;
	do         
		{               
		flag=1;
		printf("\nEnter Boarding point:  ");
		scanf("%s",strt);
		printf("Enter final destination:  ");
		scanf("%s",dst);
		
		for(int i=0;i<10;i++)
			{
			if(strcmp(strt,fl[i].start)==0 && strcmp(dst,fl[i].dest)==0)
				{
				if(fl[i].seats!=0)
    				{
    				flag=0;
    				printf("\nFlight available!!");
    				printf("\nDeparture time: %d\nArrival time: %d",fl[i].starttime,fl[i].arrivaltime);
    				printf("\nSeats available: %d",fl[i].seats);
    				printf("\nwant to confirm booking(1 for yes): ");
    				scanf("%d",&ans2);
    				if(ans2==1)
        				{
        				printf("\nFlight booked!!");
        				printf("\nBoarding point: %s",strt);
        				printf("\nDestination: %s",dst);
        				printf("\nDeparture time: %d\nArrival time: %d",fl[i].starttime,fl[i].arrivaltime);
        				printf("\nSeats available: %d",--fl[i].seats);
        				break;
        				}
    				}
    			else
    			    {
    			       printf("Sorry Seat not availabe!!");
    			    }
				}
			}
		if(flag==1)
			{
			printf("\nFlight not availabe!!");
			}
		printf("\nDo you want to check for more flight(press 1 for yes): ");
		scanf("%d",&ans);
		
		}while (ans==1);
	
	return 0;
	}