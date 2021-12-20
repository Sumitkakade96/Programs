#include<stdio.h>

void LowerCase(char *str)
{
	while(*str!='\0')
	{
		if((*str >= 97) && (*str <= 122))
		{
			printf("%c",*str-32);
		}
		else 
		{
			printf("%c",*str);
		}
		str++;
	}
	
}

int main()
{
	char Arr[20];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	LowerCase(Arr);
	
	return 0;
}