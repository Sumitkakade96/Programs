#include<stdio.h>
#include<stdbool.h>

int countmult(int);

int main()
{
	int ivalue=0;
	int iret=0;
	
	printf("enter a number:\n");
	scanf("%d",&ivalue);
	
	iret=countmult(ivalue);
	printf("%d",iret);
	return 0;
}

int countmult(int ino)
{
	int iret=1,idigit=0,icnt=0;
	if(ino<0)
	{
		ino=-ino;
	}
	
	while(ino!=0)
	{
		idigit=ino%10;
		iret=iret*idigit;
		ino=ino/10;
	}
	
	return iret;
}