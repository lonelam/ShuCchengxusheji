#include<stdio.h>
int dayr[]={31,29,31,30,31,30,31,31,30,31,30,31};
int day[] ={31,28,31,30,31,30,31,31,30,31,30,31};
int main(void)
{
    int y,m,d,i;
    int days=0;
    printf("Input year, month, day: ");
    scanf("%d%d%d",&y,&m,&d);
    if((y%100&&y%4)||((!y%100)&&y%400))
    {
        for(i=0;i<m-1;i++)
        {
            days+=day[i];
        }
        days+=d;
    }
    else
    {
        for(i=0;i<m-1;i++)
        {
            days+=dayr[i];
        }
        days+=d;
    }
    printf("Days of year:%d",days);
    return 0;
}
