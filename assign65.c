#include<stdio.h>

int FactDiff(int ino)
{
	int i=0,idigit=0,isum1=0,isum2=0;
	if(ino<=0)
	{
		ino=-ino;
	}
	while(ino!=0)
	{
		idigit=ino%10;
		ino=ino/10;
		if((idigit%2)==0)
		{
			isum1=isum1+idigit;
		}
		else
		{
			isum2=isum2+idigit;
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
	
	printf("Diff of factor is :%d\n",iret);
	return 0;
}