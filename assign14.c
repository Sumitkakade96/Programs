#include<stdio.h>

typedef int BOOL;

#define TRUE 1;
#define FALSE 2;

BOOL check(int ino)
{
	if(ino<=0)
	{
		return FALSE;
	}
	if(ino/5)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


int main()
{
	int ivalue=0;
	BOOL bret=FALSE;
	
	printf("Enter the number:\n");
	scanf("%d",&ivalue);
	
	iret=check(ivalue);
	
	if(iret==TRUE)
	{
		printf("Number is divisible by 5\n");
	}
	else
	{
		printf("Number is not divisible by 5\n");
	}
	return 0;
}