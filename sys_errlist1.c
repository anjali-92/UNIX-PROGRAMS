#include<error.h>
#include<stdio.h>

int main()
{
	int i;
	for(i=0;i<sys_nerr;i++)
	{
		printf("\nsys_errlist[%d]->%s",i,sys_errlist[i]);
	}
}
