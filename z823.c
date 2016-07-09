#include<string.h>
#include<stdio.h>
void delchar(char *s,char c);
int main(void)
{
    char s[60];
    char c;
    printf("Input a string: ");
    gets(s);
    printf("Input a char: ");
    scanf("%c",&c);
    delchar(s,c);
    printf("After deleted,the string is:%s",s);
    return 0;
}
void delchar(char *s,char c)
{
    char * temp;
    int n,i;
    int j=0;
    n = strlen(s);
    temp = malloc((n+1)*sizeof(char));
    for(i=0;i<n;i++)
    {
        if(s[i]!=c)
        {
            temp[j]=s[i];
            j++;
        }
    }
    strcpy(s,temp);
    free(temp);
    return ;
}
