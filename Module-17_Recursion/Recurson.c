#include<stdio.h>
void fun()
{
    printf("Fun\n");
    // fun(); ***Its infinite_recurson.
}
int main()
{
    fun();
    return 0;
}