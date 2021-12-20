#include<stdio.h>

int MultFact(int ino)
{
	int icnt=1,i=0,ifact=0,isum=1;
	if(ino<=0)
	{
		ino=-ino;
	}
	ifact=ino;
	for(i=1;i<ino;i++)
	{
		if((ifact%i)==0)
		{
			isum=isum*i;
		}
	}
	return isum;
}

int main()
{
	int ivalue=0,iret=0;
	printf("Enter the number:\n");
	scanf("%d",&ivalue);
	
	
	iret=MultFact(ivalue);
	
	printf("Sum of factor is :%d\n",iret);
	return 0;
}