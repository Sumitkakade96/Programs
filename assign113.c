#include<stdio.h>

void display(int irow,int icol)
{
	int i=0,j=0;
	char ch1='A';
	
	for(i=0;i<irow;i++)
	{
	
		for(j=0;j<icol;j++)
		{
			printf("%c\t",ch1);
		}
		ch1++;
		printf("\n");
	}
	
}

int main()
{
	int row=0,coloumn=0;
	printf("Enter the rows and coloumns:\n");
	scanf("%d %d",&row,&coloumn);
	
	display(row,coloumn);
	return 0;
}