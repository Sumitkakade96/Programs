#include<stdio.h>

void Display(int ino)
{
	while(ino>0)
	{
		printf("* ");
		ino--;
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