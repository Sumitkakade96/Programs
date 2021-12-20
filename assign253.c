#include<stdio.h>

void CopyStrX(char *str1,char *str2)
{
	int icnt=0,i=0;
	
	if(*str1==0)
		return;
	
	while(*str1!='\0')
	{
		if((*str1 >= 97) && (*str1 <= 122))
		{
			*str2= *str1;
			*str2++;
			icnt++;
		}
		else if(*str1==32)
		{
			*str2= *str1;
			*str2++;
			icnt++;
		}
		
		*str1++;
	}
	
	*str2='\0';
	str2=str2-(icnt);
	
	//for(i=0; i < icnt; i++)
	while(*str2!='\0')
	{
		printf("%c",*str2);
		*str2++;
	}
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("Enter the string :\n");
	scanf("%[^'\n']c",Arr);
	
	CopyStrX(Arr,Brr);
	
	return 0;
}