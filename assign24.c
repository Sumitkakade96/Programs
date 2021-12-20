#include<stdio.h>

void Display(int ino,int ifreq)
{
	int i=0;
	
	for(i=0;i<ifreq;i++)
	{
		printf("%d	",ino);
	}
		
}

int main()
{
	int ivalue1=0,ivalue2=0;
	printf("Enter the number:\n");
	scanf("%d",&ivalue1);
	
	printf("Enter the Frequency:\n");
	scanf("%d",&ivalue2);
	
	Display(ivalue1,ivalue2);
	
	return 0;
}