#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char s[5][30];
    int i;
    printf("Input 5 strings:\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",s[i]);
    }
    qsort(s,5,sizeof(s[1]),strcmp);
    printf("Max is:%s",s[4]);
    return 0;
}
