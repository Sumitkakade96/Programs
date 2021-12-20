#include<stdio.h>

int CountCapital(char *str)
{
	int icnt1=0,icnt2=0;
	
	while(*str!='\0')
	{
		if((*str >= 65) && (*str <= 90))
		{
			icnt1++;
		}
		else if((*str >= 97) && (*str <= 122))
		{
			icnt2++;
		}
		str++;
	}
	return icnt2-icnt1;
	
}

int main()
{
	int iret=0;
	char Arr[20];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	iret=CountCapital(Arr);
	
	printf("Capital letters in string are: %d\n",iret);
	
	return 0;
}