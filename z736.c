#include<stdio.h>
#include<string.h>
int main()
{
    char inp[80];
    int i,n;
    scanf("%s",inp);
    for(i=0;i<strlen(inp);i++)
    {
        if(inp[i]<'9'&&inp[i]>'0')
            putchar(inp[i]);
    }
    return 0;
}
