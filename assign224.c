#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 2

BOOL ContainVowel(char *str)
{
	
	while(*str!='\0')
	{
		if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
		{
			return TRUE;
		}
		str++;
	}
	return FALSE;
	
}

int main()
{
	BOOL bret=FALSE;
	char Arr[20];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	bret=ContainVowel(Arr);
	
	if(bret==TRUE)
	{
		printf("It contains Vowel\n");
	}
	else
	{
		printf("There is no vowel\n");
	}
	
	return 0;
}