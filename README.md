#include<stdio.h>
int main()
{

    int i,j,k,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

