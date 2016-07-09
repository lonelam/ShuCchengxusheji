#include<stdio.h>
int search(int * list, int n,int x);
int main(void)
{
    int n,i,x,ans;
    int list[10];
    printf("Input n:");
    scanf("%d",&n);
    printf("Input %d integers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",list+i);
    }
    printf("Input x:");
    scanf("%d",&x);
    ans=search(list,n,x);
    if(ans!=-1)
    {
        printf("index = %d",ans);
    }
    else
        printf("Not found");
    return 0;
}
int search(int * list, int n , int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(list[i]==x)
            return i;
    }
    return -1;
}
