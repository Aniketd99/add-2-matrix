#include <stdio.h>
main() 
{
  int i, j, row, col;
  int a[20][20], b[20][20], sum[20][20];;
  printf("Enter number of rows: ");
  scanf("%d", &row);
  printf("Enter number of columns: ");
  scanf("%d", &col);
  printf("Enter Matrix A: ");
  for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter Matrix B: ");
  for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  printf("Sum of two Matrices=\n");
  for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
      sum[i][j] = a[i][j] + b[i][j];
      printf("%4d", sum[i][j]);
    }
    printf("\n");
  }
}
