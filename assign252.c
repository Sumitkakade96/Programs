#include<stdio.h>


void StrcpyX(char *str1,char *str2,int count)
{
	int icnt=0,i=0,temp=0;
	temp=count;

	while((*str1!='\0') && (count!=0))
	{
		*str2=*str1;
		str1++;
		str2++;
		icnt++;
		count--;
		
	}
	
	*str2='\0';
	str2=str2-(icnt);

	for(i=0;i<temp,i<icnt;i++)
	{
		printf("%c",*str2);
		str2++;
	}
}

int main()
{
	int no=0;
	char Arr[30];
	char Brr[30];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	printf("how much do u want to print elements : \n");
	scanf("%d",&no);
	StrcpyX(Arr,Brr,no);

	return 0;
}