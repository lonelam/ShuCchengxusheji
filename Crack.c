#include<windows.h>
#include<stdio.h>
int ReadDisk(int Id,int num,unsigned char *buffer)
{
	/*
	读取扇区
	id = ID号
	num = 读取数量
	成功返回读取字节数
	*/
	HANDLE hFile=NULL;
	int offset=0;
	int ReadSize=0;
	DWORD Readed=0;
	offset = Id*512;
	ReadSize = num*512;
	if (buffer==NULL)
	{
		return ReadSize;
	}
	hFile = CreateFileA("\\\\.\\\\physicaldrive0",
		GENERIC_READ,
		FILE_SHARE_READ|FILE_SHARE_WRITE,NULL,OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,NULL);
	if (hFile==INVALID_HANDLE_VALUE)
	{
		MessageBoxA(NULL,"不能打开 \\\\.\\\\physicaldrive0..","Error",MB_OK | MB_ICONERROR);
		return 0;
	}
	SetFilePointer(hFile,offset,0,0);
	ReadFile(hFile,buffer,ReadSize,&Readed,NULL);
	CloseHandle(hFile);
	return Readed;
}
int main(void)
{
	FILE * fzero;
	int i;
	unsigned char * buf;
	buf = malloc(sizeof(unsigned char)*500);
//	fzero = fopen("part.txt","w");
//	fprintf(fzero,"%ld",ReadDisk(0,1,buf));
	printf("%ld",ReadDisk(0,1,buf));
	for(i =0;i<500;i++)
	{
		printf("%c",buf[i]);
	}
}
