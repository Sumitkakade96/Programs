#include<stdio.h>
#include<stdbool.h>

bool reverse(int);

int main()
{
	int ivalue=0;
	bool iret=false;
	
	printf("enter a number:\n");
	scanf("%d",&ivalue);
	
	iret=reverse(ivalue);
	if(iret==true)
	{
		printf("it contains zero\n");
	}
	else
	{
		printf("there is no zero \n");
	}
	
	return 0;
}

bool reverse(int ino)
{
	int irev=0,idigit=0,icnt=0,i=0;
	if(ino<0)
	{
		ino=-ino;
	}
	
	while(ino!=0)
	{
		idigit=ino%10;
		//irev=(irev*10)+ idigit;
		if(idigit==0)
		{
			return true;
		}
		ino=ino/10;
	}
	
	return false;
}