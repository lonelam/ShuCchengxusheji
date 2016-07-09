#include<stdio.h>
#include<string.h>
int main(void)
{
    int n;
    int i;
    char s[80];
    char cc;
    printf("Input a character: ");
    cc=getchar();
    getchar();
    printf("Input a string: ");
    gets(s);
    n=strlen(s);
    for(i=n-1;i>-1;i--)
    {
        if(s[i]==cc)
            break;
    }
    if(i!=-1)
    {
        printf("index=%d",i);

    }
    else printf("NotFound");
    return 0;
}
