#include<stdio.h>

void Display(int ino)
{
	if(ino<10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
		
}

int main()
{
	int ivalue=0;
	printf("Enter the number:\n");
	scanf("%d",&ivalue);
	
	Display(ivalue);
	
	return 0;
}