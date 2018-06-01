#include<stdio.h>
int main()
{
    int i,a[10];
    printf("enter the numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=9;i>=5;i--)
    {
        printf("%d ",a[i]);
    }
}
