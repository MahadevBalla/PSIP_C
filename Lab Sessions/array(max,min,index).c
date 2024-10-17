#include <stdio.h>

void print(int marks[],int size)
{
 printf("Elements of the array are :");
 for(int i=0;i<size;i++)
	 {
	  printf(" %d ",marks[i]);
     }
}

void scan(int marks[],int size)
{
 printf("Enter elements:\n");
 for(int i=0;i<size;i++)
	 scanf(" %d ",&marks[i]);
}

int search(int marks[],int size,int target)
{
 for(int i=0;i<size;i++)
 {
	 if(target==marks[i])
	 { 
      return i;
	 }
	 return -1;
 }
}

int findmax(int marks[],int size)
{
 int max=marks[0];
 for(int i=0;i<size;i++)
 {
	 if(marks[i]>max)
		 max=marks[i];
 }
 return max;
}

int findmin(int marks[],int size)
{
 int min=marks[0];
 for(int i=0;i<size;i++)
 {
	 if(marks[i]<min)
		 min=marks[i];
 }
 return min;
}

int main ()
{

  int size;
  printf("Enter the size of array : ");
  scanf("%d",&size);
  
  int marks[size];
  scan(marks,size);
  print(marks,size);
  
  int target;
  printf("Enter the element to be searched :");
  scanf("%d",&target);
  
  int res=search(marks,size,target);
  if(res!=-1)
	  printf("%d is present at index %d\n",target,res);
  else
	  printf("%d is not present in array\n",target);
  
  int max=findmax(marks,size);
  int min=findmin(marks,size);
  
  printf("Maximum elelment in array ; %d\n",max);
  printf("Minimum element in array : %d\n",min);
  
  return 0;
  
}
