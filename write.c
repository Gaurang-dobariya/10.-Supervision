#include<stdio.h>

void main()
{
	int *p;
	char data[1000];
	p = fopen("write.txt","w");
	
	if(p==0)
	{
		printf("file not open");
		
	}
	else
	{
		printf("Enter your string = ");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		
		printf("data add successfull.......");
	}
	
	fclose(p);
}
