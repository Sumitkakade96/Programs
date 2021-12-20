#include<stdio.h>

void Accept(int ino)
{
	int icnt=0;
	for(icnt=0;icnt<ino;icnt++)
	{
		printf("* ");
	}
}

int main()
{
	int ivalue=5;

	
	Accept(ivalue);
	
	return 0;
}