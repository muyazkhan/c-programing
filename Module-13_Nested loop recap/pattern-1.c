#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        // line sesh
        k++;
        printf("\n");
    }
    return 0;
}