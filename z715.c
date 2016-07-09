#include<stdio.h>
void swap(int * a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int arr[10];
    int n,i;
    int * max,* min;
    printf("Input n: ");
    scanf("%d",&n);
    printf("Input %d integers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("After swapped:");
    max = arr;
    min = arr;
    for(i=0;i<n;i++)
    {
        if(arr[i]>*max)
            max = arr + i;
        if(arr[i]<*min)
            min = arr + i;
    }
    swap(min,arr);
    if(max==arr+0)
        swap(min,arr+n-1);
    else
        swap(max,arr+n-1);
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}
