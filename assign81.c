#include<stdio.h>

void rangedisplay(int istart,int iend)
{
	int icnt=0;
	if(istart<0)
	{
		for(icnt=0;istart<=iend;icnt++)
		{
			printf("%d\t",istart);
			istart++;
		}
	}
	else if(istart>iend)
	{
		printf("Invalid Range\n");
	}
	else
	{
		for(icnt=0;istart<=iend;icnt++)
		{
			printf("%d\t",istart);
			istart++;
		}
	}
		
	
}

int main()
{
	int ivalue1=0,ivalue2=0;
	
	printf("Enter the 1'st number:\n");
	scanf("%d",&ivalue1);
	
	printf("Enter the 2'nd number:\n");
	scanf("%d",&ivalue2);
	
	rangedisplay(ivalue1,ivalue2);
	
	return 0;
}
