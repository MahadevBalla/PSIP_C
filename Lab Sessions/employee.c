#include <stdio.h>
#include <string.h>

struct employee
    {
    char name[21];
    char gender[2];
    int salary,year,month,date;
    };

void input(struct employee e[15],int start,int stop)
    {
    for(int i=start;i<stop;i++)
		{
		printf("\nEnter employee name: ");
    	scanf("%s",e[i].name);
    	printf("Enter gender(M/F): ");
    	scanf("%s",e[i].gender);
    	printf("Enter salary: ");
    	scanf("%d",&e[i].salary);
    	printf("Enter birth year: ");
    	scanf("%d",&e[i].year);
    	printf("Enter birth month: ");
    	scanf("%d",&e[i].month);
    	printf("Enter birth date(eg-24): ");
    	scanf("%d",&e[i].date);
		}
    }

void print(struct employee e[15],int start,int stop)
    {
    for(int i=start;i<stop;i++)
        {
	printf("Enter details of employee %d",i+1);
        printf("\nName: %s\nGender: %s\nSalary: %d\nDate of birth: %d/%d/%d\n",e[i].name,e[i].gender,e[i].salary,e[i].date,e[i].month,e[i].year);
        }
    }

int delete(struct employee e[15],int size,int index)
    {
    for (int i=index;i<size-1;i++)  
        {  
        strcpy(e[i].name,e[i+1].name);
        strcpy(e[i].gender,e[i+1].gender);
        e[i].salary=e[i+1].salary;
        e[i].year=e[i+1].year;
        e[i].month=e[i+1].month;
        e[i].date=e[i+1].date;
        }
    return (--size);
    }

int main()
	{
	struct employee e[16];
	int size=10;
	printf("\nInput records\n");
	input(e,0,size);
	
	print(e,0,size);
	int choice,flag;
	char name[21];
	for(int j=0;j<5;j++)
	    {
	    printf("\n1: Add new employee details\n2: Delete  employee details");
	    printf("\n3: Update salary\nEnter One choice from above: ");
	    
	    scanf("%d",&choice);
	    
	    switch(choice)
	        {
	        case 1:
	            input(e,size,size+1);
	            size++;
	            printf("\nRecord after adding new employee:-\n");
	            print(e,0,size);
        	    break;
        	
        	case 2:
        	    flag=1;
        	    int index;
        	    printf("\nEnter employee name: "); 
        		scanf("%s",name);
        	    for(int j=0;j<size;j++)
        		    {
        		    if(strcmp(name,e[j].name)==0)
        		        {
        		        printf("\nRecord that is going to be deleted:-\n");
        		        print(e,j,j+1);
        		        printf("\n\n");
        		        size=delete(e,size,j);
        		        printf("\nRecord after deleting record of employee:-\n");
	                    print(e,0,size);
        		        flag=0;
        		        break;
        		        }
        		    }
        		 if(flag==1)
        		    {
        		    printf("\nEmployee not found!");
        		    }
        	    break;
        	    
        	case 3:
        	    flag=1;
        	    int sal;
        	    printf("\nEnter employee name: "); 
        		scanf("%s",name);
        		for(int j=0;j<size;j++)
        		    {
        		    if(strcmp(name,e[j].name)==0)
        		        {
        		        printf("\nSalary is: %d\nEnter new salary: ",e[j].salary);
        		        scanf("%d",&sal);
        		        e[j].salary=sal;
        		        printf("\nRecord after updating salary:-\n");
	                    print(e,0,size);
	                    flag=0;
        		        break;
        		        }
        		    }
        		 if(flag==1)
        		    {
        		    printf("\nEmployee not found!");
        		    }
        		
        		break;
        	    
        	default:
        	    printf("\nInvalid input");
        	    
	        }
	    
	    }
	int t=size;
	for(int i=t-1;i>0;i--)
	    {
	    if(2023-e[i].year>59)
	        {
	        printf("\nDeleting record because crossed retirment age(i.e.60):-");
	        print(e,i,i+1);
	        size=delete(e,size,i);
	        }
	    else if(e[i].salary==0)
		{
		printf("\nDeleting record because salary=0:-");
	        print(e,i,i+1);
	        size=delete(e,size,i);
		}
	    }
	printf("\n\n\nRecord after Deleting details of retired people:-\n");
	print(e,0,size);
	
	return 0;
	}