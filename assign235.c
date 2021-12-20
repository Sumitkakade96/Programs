#include<stdio.h>

int Countwhite(char *str)
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if(*str==' ')
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
	
	iret=Countwhite(Arr);
	
	printf("White Spaces in the string: %d",iret);
	
	return 0;
}