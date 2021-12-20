#include<stdio.h>

int CountCapital(char *str)
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if((*str >= 65) && (*str <= 90))
		{
			icnt++;
		}
		str++;
	}
	return icnt;
	
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