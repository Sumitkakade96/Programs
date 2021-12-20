#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkvowel(char ch)
{
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cvalue='\0';
	BOOL iret;
	printf("Enter character:\n");
	scanf("%c",&cvalue);
	
	iret=chkvowel(cvalue);
	
	if(iret==TRUE)
	{
		printf("It's a vowel:%c\n",cvalue);
	}
	else
	{
		printf("It's not an vowel:%c",cvalue);
	}
}