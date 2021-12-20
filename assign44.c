#include<stdio.h>

int SumNonFact(int ino)
{
	int i=0,ifact=0,isum=0;
	if(ino<=0)
	{
		ino=-ino;
	}
	ifact=ino;
	for(i=1;i<ino;i++)
	{
		if((ifact%i)==0)
		{}
		else
		{
			isum=isum+i;
		}
	}
	return isum;
}

int main()
{
	int ivalue=0,iret=0;
	printf("Enter the number:\n");
	scanf("%d",&ivalue);
	
	
	iret=SumNonFact(ivalue);
	
	printf("Sum of factor is :%d\n",iret);
	return 0;
}