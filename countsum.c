#include<stdio.h>
#include<stdbool.h>

int countsum(int);

int main()
{
	int ivalue=0;
	int iret=0;
	
	printf("enter a number:\n");
	scanf("%d",&ivalue);
	
	iret=countsum(ivalue);
	printf("%d",iret);
	return 0;
}

int countsum(int ino)
{
	int idigit=0,ieven=0,iodd=0;
	if(ino<0)
	{
		ino=-ino;
	}
	
	while(ino!=0)
	{
		idigit=ino%10;
		if((idigit%2)==0)
		{
			ieven=ieven+idigit;
		}
		else
		{
			iodd=iodd+idigit;
		}
		ino=ino/10;
	}
	return ieven-iodd;
}