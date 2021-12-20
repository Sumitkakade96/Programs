#include<stdio.h>

int CountSmall(char *str)
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if((*str >= 97) && (*str <= 122))
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
	
	iret=CountSmall(Arr);
	
	printf("Small letters in string are: %d\n",iret);
	
	return 0;
}