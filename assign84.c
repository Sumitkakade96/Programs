#include<stdio.h>

int addition(int istart,int iend)
{
	int icnt=0,isum=0;

	if(istart<0)
	{
		return 1;
	}
	else if(istart>iend)
	{
		return 1;
	}
	else
	{
		for(icnt=0;istart<=iend;icnt++)
		{
			if((istart%2)==0)
			{
				isum=isum+istart;
			}
			istart++;
		}
	}
		
	return isum;
}

int main()
{
	int ivalue1=0,ivalue2=0;
	int iret=0;
	printf("Enter the 1'st number:\n");
	scanf("%d",&ivalue1);
	
	printf("Enter the 2'nd number:\n");
	scanf("%d",&ivalue2);
	
	iret=addition(ivalue1,ivalue2);
	
	if(iret==1)
	{
		printf("Invalid range\n");
	}
	else
	{
		printf("Addition of elements is:%d\n",iret);
	}
	return 0;
}
