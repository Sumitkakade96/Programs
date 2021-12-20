#include<stdio.h>

double squaremeter(int);

int main()
{
	int ivalue=0;
	double iret=0.0;
	
	printf("Enter area in square feet:\n");
	scanf("%d",&ivalue);
	
	iret=squaremeter(ivalue);
	
	printf("area in square meter is:%f\n",iret);
	
	return 0;
}

double squaremeter(int ivalue)
{
	double iret=0.0;
	
	iret=(ivalue*0.0929);
	
	return iret;
}
	