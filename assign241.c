#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 2

BOOL IsPresentChar(char *str,char chr)
{
	while(*str!='\0')
	{
		if(*str==chr)
		{
			return TRUE;
		}
		str++;
	}
	return FALSE;
}

int main()
{
	BOOL iret=FALSE;
	char Arr[20],ch='\0';
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	printf("\nEnter the character want to search:\n");
	scanf(" %c",&ch);
	
	iret=IsPresentChar(Arr,ch);
	
	if(iret==TRUE)
	{
		printf("Character is Present");
	}
	else
	{
		printf("Character is not present");
	}

	return 0;
}