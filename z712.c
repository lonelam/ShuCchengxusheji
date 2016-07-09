#include<stdio.h>
int main()
{
    int arr[10];
    int n,i,sum;
    printf("Input n: ");
    scanf("%d",&n);
    sum=0;
    printf("Input %d integers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        sum+=arr[i];

    }
    printf("Average=%.2f",1.*sum/n);

}
