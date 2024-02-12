#include<stdio.h>
void fun(char * ar)
{
    ar[3]='G';
}
int main()
{
    char ar[]="Hello";
    fun(ar);
    printf("%s",ar);
    return 0;
}