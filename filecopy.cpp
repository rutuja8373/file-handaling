#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("bcs.txt","r");
	fp2=fopen("bsc.txt","w");
	if(fp1==NULL)
	{
		printf("file not found");
		exit(0);
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	printf("file copy successfuly");
}

