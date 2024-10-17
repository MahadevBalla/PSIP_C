#include<stdio.h>

void transposemat(int mat1[10][10], int mat2[10][10], int r, int c)
{
for(int i=0;i<r;i++)
 for(int j=0;j<c;j++)
  mat2[j][i]=mat1[i][j];
}

void displaymat(int r, int c, int mat[10][10])
{
for(int i=0;i<r;i++)
  {
  for(int j=0;j<c;j++)
  printf("%d \t",mat[i][j]);
  printf("\n");
  }
}

void readmat(int r, int c, int mat[10][10])
{
printf("Enter the elements of array :\n");
for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
    {
    scanf("%d",&mat[i][j]);
    }
printf("\n");    
}

int main()
{
int a[10][10],row1,col1;
int b[10][10];

printf("Enter the number of rows of Matrix : ");
scanf("%d",&row1);
printf("Enter the number of columns Matrix : ");
scanf("%d",&col1);

readmat(row1,col1,a);
printf("Matrix 1 :\n");
displaymat(row1,col1,a);
printf("\n");

transposemat(a,b,row1,col1);
printf("Transpose of the matrix is :\n");
displaymat(row1,col1,b);

return 0;    
}
