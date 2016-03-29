//zuoye 34
#include<stdio.h>
int main(void)
{
	char in[10];
	int i,l,b,d,o;
	l=b=d=o=0;
	for(i=0;i<10;i++)
	{
		scanf("%c",in+i);
		if(in[i]==' ') b++;
		else if(in[i]>='A'&&in[i]<='z') l++;
		else if (in[i]>='0'&&in[i]<='9') d++;
		else o++;
	}
	printf("Input 10 characters: letter=%d,blank=%d,digit=%d,other=%d",l,b,d,o);
    return 0;
}
