#include<stdio.h>
#include<stdlib.h>
struct stud
{
	char name[20][20];
	int per,rno;
}s1[100],t;
int main()
{
	FILE *fp1,*fp2;
	int i,n,pass;
	fp1=fopen("bubble.txt","r");
	fp2=fopen("rutuja.txt","w");
	if(fp1==NULL)
	{
		printf("\nfile not found..");
		exit(0);
	}
	while(!feof(fp1))
	{
		fscanf(fp1,"%s%d%d",&s1[i].name,&s1[i].rno,&s1[i].per);
		i++;
	}
	n=i-1;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(s1[i].per>s1[i+1].per)
			{
				t=s1[i];
				s1[i]=s1[i+1];
				s1[i+1]=t;
			}
		}
	}
	printf("\nSORTED FILE COPY SUCC..");
	for(i=0;i<n;i++)
	{
		fprintf(fp2,"\n%s\t%d\t%d \t",s1[i].name,s1[i].rno,s1[i].per);
	}
	fclose(fp1);
	fclose(fp2);
}
