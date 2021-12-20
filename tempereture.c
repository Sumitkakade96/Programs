#include<stdio.h>

double temperature(int);

int main()
{
	int ivalue=0;
	double iret=0.0;
	
	printf("Enter the fahrenheit:\n");
	scanf("%d",&ivalue);
	
	iret=temperature(ivalue);
	
	printf("temperature in celsius is:%f\n",iret);
	
	return 0;
}

double temperature(int itemp)
{
	double ians=0.0;
	ians=itemp-32;
	ians=ians*5/9;
	return ians;
}
	