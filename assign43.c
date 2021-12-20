#include<stdio.h>

int NonFact(int ino)
{
	int icnt=1,i=0,ifact=0;
	if(ino<=0)
	{
		ino=-ino;
	}
	ifact=ino;
	for(i=1;i<ino;i++)
	{
		if((ifact%i)==0)
		{}
		else
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
	
	
	NonFact(ivalue);
	return 0;
}