#include<stdio.h>

void printeven(int ino)
{
	int icnt=1;
	if(ino<0)
	{
		return;
	}
	while(ino!=0)
	{
		if((icnt%2)==0)
		{
			printf("%d	",icnt);
			ino--;
		}
		icnt++;
	}
	
}

int main()
{
	int ivalue=0;
	printf("Enter the number:\n");
	scanf("%d",&ivalue);
	
	
	printeven(ivalue);
	
	return 0;
}