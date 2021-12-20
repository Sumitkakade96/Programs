#include<stdio.h>

void Toggle(char *str)
{
	while(*str!='\0')
	{
		if((*str >= 97) && (*str <= 122))
		{
			printf("%c",*str-32);
		}
		else if(*str==' ')
		{
			printf(" ");
		}
		else
		{
			printf("%c",*str+32);
		}
		str++;
	}
	
}

int main()
{
	char Arr[20];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	Toggle(Arr);
	
	return 0;
}