#include<stdio.h>
#include<stdlib.h>

int r,c,r1,c1,a[10][10],b[10][10];

void print_matrix(int,int);

void accept_matrix(int matrix[10][10],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("\nEnter Element [%d][%d] : ",i,j);
      scanf("%d",&matrix[i][j]);
    }
  }
  
}

void main()
{
  printf("\nEnter The Number Of Rows And Columns Of First Matrix\n");
  scanf("%d%d",&r,&c);
  accept_matrix(a,r,c);
  print_matrix;
  printf("\nEnter The Number Of Rows And Columns Of Second Matrix\n");
  scanf("%d%d",&r1,&c1);
  accept_matrix(b,r1,c1);
  
  
}

