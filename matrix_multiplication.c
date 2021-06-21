#include<stdio.h>
#include<stdlib.h>

void print_matrix(int,int);

void accept_matrix(int r,int c)
{
  int i,j,a[r][c];
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("\nA[%d][%d]",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  
}

void main()
{
  int r,c,r1,c1;
  printf("\nEnter The Number Of Rows And Columns Of First Matrix\n");
  scanf("%d%d",&r,&c);
  accept_matrix(r,c);
  print_matrix;
  printf("\nEnter The Number Of Rows And Columns Of Second Matrix\n");
  scanf("%d%d",&r1,&c1);
  
  
}

