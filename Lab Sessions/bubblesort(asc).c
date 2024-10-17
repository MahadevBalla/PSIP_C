#include <stdio.h>

void print(int marks[],int n)
{
 for(int i=0;i<n;i++)
	 {
	  printf(" %d ",marks[i]);
     }
}

void scan(int marks[],int n)
{
 printf("Enter elements: \n");
 for(int i=0;i<n;i++)
	 scanf("%d",&marks[i]);
}

void bubblesort(int a[],int n)
{
 int temp=0;
 for(int pass=0;pass<n-1;pass++)
 {
 for(int j=0;j<n-1-pass;j++)
  {
   if(a[j]>a[j+1])
   {
    temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
   }  
  }
 }
}

int main ()
{

  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  
  int arr[n];
  scan(arr,n);
  printf("Original array :");
  print(arr,n);
  bubblesort(arr,n);
  printf("\nArray after sorting :");
  print(arr,n);
  printf("\n");
  
  return 0;
  
}
