#include<stdio.h>
void fun(int i)
{   
    if (i==9) return;
    fun(i+1);
    printf("%d\n",i);
}
int main()
{
    fun(1);
    return 0;
}