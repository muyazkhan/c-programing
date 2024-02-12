#include<stdio.h>
int main()
{
  int r,n;
  int rr[r][n];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&rr[i][j]);
    }
  }

  int ar[r][n];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("%d ",rr[i][j]);
    }
    printf("\n");
  }


  return 0;
}