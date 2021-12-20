#include<stdio.h>

void DisplayFactor(int ino)
{
	int icnt=1,i=0,ifact=0;
	if(ino<0)
	{
		return;
	}
	ifact=ino;
	for(i=1;i<ino;i++)
	{
		if(((ifact%i)==0) && ((i%2)==0))
		{
			printf("%d	",i);
		}
	}
	
}

int main()
{
	int ivalue=0;
	printf("Enter the number:\n");
	scanf("%d",&ivalue);
	
	
	DisplayFactor(ivalue);
	
	return 0;
}