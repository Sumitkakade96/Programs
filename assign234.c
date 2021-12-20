#include<stdio.h>

void DigitPrint(char *str)
{
	while(*str!='\0')
	{
		if((*str >= 48) && (*str <= 57))
		{
			printf("%c",(*str));
		}
		
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	DigitPrint(Arr);
	
	return 0;
}