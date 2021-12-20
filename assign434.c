#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}

}
void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
}
BOOL SearchNode(PPNODE Head,int no)
{
	BOOL icnt=1,ipos=0;
	if(*Head==NULL)
	{
		return FALSE;
	}
	
	while(*Head!=NULL)
	{
		if((*Head)->data==no)
		{
			 ipos=icnt;
		}
		*Head=(*Head)->next;
		icnt++;
	}
	return ipos;
}
BOOL LargestNode(PNODE Head)
{
	BOOL ilarge=0;
	
	if(Head==NULL)
	{
		return FALSE;
	}
	PNODE temp=Head;

	while(temp->next!=NULL)
	{
		if(ilarge<(temp->data))
		{
			ilarge=temp->data;
		}
		temp=temp->next;
	}
	return ilarge;
}

int main()
{
	PNODE first=NULL;
	BOOL iret=0;
	
	InsertFirst(&first,240);
	InsertFirst(&first,320);
	InsertFirst(&first,230);
	InsertFirst(&first,110);
	
	Display(first);
	
	iret=LargestNode(first);
	if(iret==FALSE)
	{
		printf("LL is empty\n");
	}
	else
	{
		printf("Largest Node is: %d",iret);
	}
	
	
	
	return 0;
}