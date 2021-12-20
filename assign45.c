#include<stdio.h>

int FactDiff(int ino)
{
	int i=0,ifact=0,isum1=0,isum2=0;
	if(ino<=0)
	{
		ino=-ino;
	}
	ifact=ino;
	for(i=1;i<ino;i++)
	{
		if((ifact%i)==0)
		{
			isum1=isum1+i;
		}
		else
		{
			isum2=isum2+i;
		}
	}
	return isum1-isum2;
}

int main()
{
	int ivalue=0,iret=0;
	printf("Enter the number:\n");
	scanf("%d",&ivalue);
	
	
	iret=FactDiff(ivalue);
	
	printf("Sum of factor is :%d\n",iret);
	return 0;
}