#include<stdio.h>

void fun(int i)
{
  if(i==45) return;
  printf("%d\n",i);
  fun(i-1);
}


int main()
{

   fun(50);

  return 0;
}