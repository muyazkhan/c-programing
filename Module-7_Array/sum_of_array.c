#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int ary[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ary[i]);
  }
  int sum = 0;
  for (int i = 0; i < n; i++)
  {

    sum +=ary[i];
  }
  printf("%d", sum);

  return 0;
}