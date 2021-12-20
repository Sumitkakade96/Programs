#include<stdio.h>


void StrcpyX(char *str1,char *str2)
{
	int icnt=0,i=0;

	/*if(*str1=='\0')
	{
		return;
	}*/

	
	while(*str1!='\0')
	{
		*str2=*str1;
		str1++;
		str2++;
		icnt++;
		
	}
	
	*str2='\0';
	str2=str2-(icnt);
	
	while(*str2!='\0')
	{
		printf("%c",*str2);
		str2++;
	}
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	StrcpyX(Arr,Brr);

	return 0;
}