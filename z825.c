#include<stdio.h>
#include<string.h>
int IsRevStr(char * s,int n);
int main(void)
{
    char s[80];
    printf("Input a string:");
    gets(s);
    if(IsRevStr(s,strlen(s)))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
int IsRevStr(char *s,int n)
{
    int i;
    for(i=0;i<=n/2;i++)
    {
        if(s[i]!=s[n-i-1])
            return 0;
    }
    return 1;
}
