#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    k=n;
    for(int i=1;i<=n;i++)
    {
        // line print
        for(int j=1;j<=k;j++)
        {
            printf("%d",j);
        }
        // line sesh
        k--;
        printf("\n");
    }
    return 0;
}