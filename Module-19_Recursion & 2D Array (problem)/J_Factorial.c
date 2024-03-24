#include<stdio.h>

long long int fact(long long int n)
{
    // base case
    if(n==0)
    {
        return 1;
    }
    long long int ans=fact(n-1);
    return ans*n;
}


int main()
{

   long long int x;
   scanf("%lld",&x);
   long long int ans=fact(x);
   printf("%lld",ans);
  return 0;
}