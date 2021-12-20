#include<stdio.h>

int Divide(int ino1,int ino2)
{
	int iret=0;
	if(ino2<=0)
	{
		return -1;
	}
	iret=ino1/ino2;
	
	return iret;
}

int main()
{
	int iret=0;
	int ivalue1=15,ivalue2=5;
	iret=Divide(ivalue1,ivalue2);
	
	printf("Divide number is: %d",iret);
	
	
	
	return 0;
}