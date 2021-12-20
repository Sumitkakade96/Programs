#include<stdio.h>

void display(int irow,int icol)
{
	int i=0,j=0;
	char ch='A';
	
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");
		ch='A';
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