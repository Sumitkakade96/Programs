#include<stdio.h>
#include<stdlib.h>

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
	if(Head==NULL)
	{
		return;
	}
	
	while(Head!=NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL");
}

int PerfectNode(PNODE Head)
{
	PNODE temp
	
	
}

int main()
{
	PNODE first=NULL;
	
	InsertFirst(&first,21);
	
	Display(first);
	
	return 0;
}