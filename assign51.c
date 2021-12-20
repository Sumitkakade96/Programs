#include<stdio.h>

void reverse(int);

int main()
{
	int ivalue=0;
	
	printf("enter a number:\n");
	scanf("%d",&ivalue);
	
	reverse(ivalue);
	return 0;
}

void reverse(int ino)
{
	int irev=0,idigit=0;
	if(ino<0)
	{
		ino=-ino;
	}
	
	while(ino!=0)
	{
		idigit=ino%10;
		irev=(irev*10)+ idigit;
		printf("%d\n",idigit);
		ino=ino/10;
	}
}