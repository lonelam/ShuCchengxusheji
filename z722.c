#include<stdio.h>
int main(void)
{
    int i,j,n;
    int sum=0;
    int arr[6][6];
    printf("Input n: ");
    scanf("%d",&n);
    printf("Input array:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==n-1||j==n-1||i+j==n-1)
            {
                continue;
            }
            else
            {
                sum+=arr[i][j];
            }
        }
        printf("sum=%d",sum);
    return 0;

}
