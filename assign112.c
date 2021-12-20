#include<stdio.h>

void display(int irow,int icol)
{
	int i=0,j=0;
	char ch1='A',ch2='a';
	
	for(i=0;i<irow;i++)
	{
		
		if(i%2==0)
		{
			for(j=0;j<icol;j++)
			{
				printf("%c\t",ch1);
				ch1++;
			}
		}
		else
		{
			for(j=0;j<icol;j++)
			{
				printf("%c\t",ch2);
				ch2++;
			}
		}
		printf("\n");
		ch1='A';
		ch2='a';
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