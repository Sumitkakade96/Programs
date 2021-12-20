#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL checkevenodd(int ino)
{
	if((ino%2)==0)
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
	BOOL ivalue=0;
	BOOL iret=0;
	printf("Enter the number:\n");
	scanf("%d",&ivalue);
	
	
	iret=checkevenodd(ivalue);
	
	if(iret==TRUE)
	{
		printf("Number is even %d\n",ivalue);
	}
	else
	{
		printf("Number is odd %d \n",ivalue);
	}
	return 0;
}