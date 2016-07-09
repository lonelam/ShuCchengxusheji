#include<stdio.h>
int getm(int n);
int main(void)
{
    int n;
    printf("Input n: ");
    scanf("%d",&n);
    printf("Input array:\n");
    if(getm(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}
int getm(int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&t);
            if(i>j&&t!=0)
                return 0;
        }
    }
    return 1;
}
