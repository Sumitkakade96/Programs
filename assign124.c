#include<stdio.h>

void PatternDisplay(int irow,int icol)
{
	int i=0,j=0;
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			if(j<=i)
			{
				printf("*\t");
			}
			else if(j==i)
			{
				printf("$\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
	
}
int main()
{
	int row=0,coloumn=0;
	printf("Enter the rows and coloumns:\n");
	scanf("%d %d",&row,&coloumn);
	
	PatternDisplay(row,coloumn);
	return 0;
}