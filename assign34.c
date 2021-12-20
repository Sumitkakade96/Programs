#include<stdio.h>

void DisplayConvert(char ch)
{
	if(ch>=65 && ch<=90)
	{
		printf("%c",ch+32);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("%c",ch-32);
	}
	
	
}

int main()
{
	char cvalue='\0';
	
	printf("Enter character:\n");
	scanf("%c",&cvalue);
	
	DisplayConvert(cvalue);
	
	return 0;
}