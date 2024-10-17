#include<stdio.h>

void multiplymat(int mat1[10][10], int mat2[10][10], int mat3[10][10], int row1, int col1, int row2, int col2)
{
    for (int i = 0; i < row1; ++i) 
        for (int j = 0; j < col2; ++j)
            mat3[i][j] = 0;

    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col2; ++j)
            for (int k = 0; k < col1; ++k)
                mat3[i][j] += mat1[i][k] * mat2[k][j];
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
int b[10][10],row2,col2;
int c[10][10];

printf("Enter the number of rows of Matrix 1 : ");
scanf("%d",&row1);
printf("Enter the number of columns Matrix 1 : ");
scanf("%d",&col1);

readmat(row1,col1,a);
printf("Matrix 1 :\n");
displaymat(row1,col1,a);
printf("\n");

printf("Enter the number of rows of Matrix 2 : ");
scanf("%d",&row2);
printf("Enter the number of columns of Matrix 2 : ");
scanf("%d",&col2);

readmat(row2,col2,b);
printf("Matrix 2 :\n");
displaymat(row2,col2,b);
printf("\n");

multiplymat(a,b,c,row1,col1,row2,col2);
printf("Product of two matrices is :\n");
displaymat(row1,col2,c);

return 0;    
}