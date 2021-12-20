#include<stdio.h>

void FactRev(int ino)
{
	int i=0;
	if(ino<=0)
	{
		ino=-ino;
	}
	i=ino-1;
	
	while(ino!=0)
	{
		if((ino%i)==0)
		{
			printf("%d	",i);
		}
		i--;
	}
}

int main()
{
	int ivalue=0;
	printf("Enter the number:\n");
	scanf("%d",&ivalue);
	
	
	FactRev(ivalue);
	return 0;
}