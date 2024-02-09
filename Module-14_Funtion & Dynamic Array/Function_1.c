#include<stdio.h>

// return_type name(parameter)
// {
//     code 
//     return what? 
// }
int sum(int x,int y) // x=20 y=25
{
    // code 
    int sum=x+y;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=sum(a,b);
    printf("%d\n",s);
    int k=sum(a,b);
    printf("%d",k);
    return 0;
}