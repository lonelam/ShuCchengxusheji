#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[80];
    printf("Input a string: ");
    gets(s);
    printf("After replaced:");
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]<='Z'&&s[i]>='A')
        {
            s[i]='Z'+'A'-s[i];
        }
        putchar(s[i]);
    }
    return 0;
}
