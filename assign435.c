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
BOOL SmallestNode(PNODE Head)
{
	BOOL ismall=0;
	
	if(Head==NULL)
	{
		return FALSE;
	}
	PNODE temp=Head;
	ismall=temp->data;
	while(temp!=NULL)
	{
		if(temp->data < ismall)
		{
			ismall=temp->data;
		}
		temp=temp->next;
	}
	return ismall;
}

int main()
{
	PNODE first=NULL;
	BOOL iret=0;
	
	InsertFirst(&first,640);
	InsertFirst(&first,240);
	InsertFirst(&first,20);
	InsertFirst(&first,230);
	InsertFirst(&first,110);
	
	Display(first);
	
	iret=SmallestNode(first);
	if(iret==FALSE)
	{
		printf("LL is empty\n");
	}
	else
	{
		printf("Smallest Node is: %d",iret);
	}
	
	
	
	return 0;
}