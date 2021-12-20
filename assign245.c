#include<stdio.h>

void Reverse(char *str)
{
	int icnt=0,i=0;
	
	while(*str!='\0')
	{
		icnt++;
		str++;
	}
	str--;
	for(i=0;i<icnt;i++)
	{
		printf("%c",*str);
		str--;
	}
	
}

int main()
{
	char Arr[20];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);

	return 0;
}