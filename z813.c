#include<stdio.h>
void sort(int a[],int n);
int main(void)
{
    int n,i;
    int * arr;
    printf("Input n: ");
    scanf("%d",&n);
    printf("Input array of %d integers: ",n);
    arr=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    sort(arr,n);
    printf("After sorted the array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;

}
void sort(int a[],int n)
{
    int i,j,tt;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tt=a[i];
                a[i]=a[j];
                a[j]=tt;
            }
        }
    }
    return;
}
