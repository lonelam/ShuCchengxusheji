#include<stdio.h>
int main()
{
    int arr[10];
    int n,i;
    int  max, min;
    printf("Input n: ");
    scanf("%d",&n);
    printf("Input %d integers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("After reversed:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[n-1-i]);
    }
    return 0;
}
