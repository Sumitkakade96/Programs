#include<stdio.h>

void reverse(int istart,int iend)
{
	int icnt=0;

	if(istart<0)
	{
		for(icnt=0;istart<=iend;icnt++)
		{
			printf("%d\t",iend);
			iend--;
		}
	}
	else if(istart>iend)
	{
		printf("Invalid range\n");
	}
	else
	{
		for(icnt=0;istart<=iend;icnt++)
		{
			printf("%d\t",iend);
			iend--;
		}
	}
		
	return isum;
}

int main()
{
	int ivalue1=0,ivalue2=0;
	
	printf("Enter the 1'st number:\n");
	scanf("%d",&ivalue1);
	
	printf("Enter the 2'nd number:\n");
	scanf("%d",&ivalue2);
	
	reverse(ivalue1,ivalue2);
	
	return 0;
}
