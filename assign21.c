#include<stdio.h>

void Display(int ino)
{
	int icnt=0;
	for(icnt=0;icnt<ino;icnt++)
	{
		printf("* ");
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