#include <stdio.h>
void print(int m[],int size)
	{
	for(int i=0;i<size;i++)
		{
		if(m[i]!=-1)
			{
			printf("%d,",m[i]);
			}
		}
	}

void read(int m[],int size)
	{
	printf("Enter elements :\n");	
	for(int i=0;i<size;i++)
		{
		scanf("%d",&m[i]);
		}	
	}

int search(int m[],int a[],int size,int tar)
	{
	int counter=0;
	for(int i=0;i<size;i++)
		{
		if(m[i]==tar)
			{
			counter++;
			a[i]=i;
			}
		else
			{
			a[i]=-1;
			}
			
		}
	return counter;
	}
	
	
int main()
{
	int size,target;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	int arr[size],index[size];
	read(arr,size);
	
	printf("\nEnter the element to be searched : ");
	scanf("%d",&target);
	
	int rec=search(arr,index,size,target);
	
	if(rec!=0)
		{
		printf("%d is found %d times at index : ",target,rec);
		print(index,size);
		}
	else
		{
		printf("%d is not present in array.",target);
		}
    printf("\n");
	return 0;
}