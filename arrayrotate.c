#include<stdio.h>
int main()
{
    int i,n,a[15];
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]<a[i])
        {
            printf("%d",i+1);
        }
    }
}




