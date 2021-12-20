#include<stdio.h>

typedef int BOOL;

BOOL IsPresentChar(char *str,char chr)
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if(*str==chr)
		{
			icnt++;
		}
		str++;
	}
	return icnt;
}

int main()
{
	BOOL iret=0;
	char Arr[20],ch='\0';
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	printf("\nEnter the character want to search:\n");
	scanf(" %c",&ch);
	
	iret=IsPresentChar(Arr,ch);
	
	printf("Character Frequency is: %d",iret);
	
	return 0;
}