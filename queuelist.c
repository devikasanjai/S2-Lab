#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front;
struct node *rear;
void input(struct node *ptr,int val)
{
	ptr = (struct node *) malloc (sizeof(struct node));
	if (ptr == NULL) 
	{
		printf("\nQUEUE IS EMPTY\n");
		return;
	} 
	else 
	{
		ptr -> data = val;
		if (front == NULL) 
		{
			front = ptr;
			rear = ptr;
			front -> next = NULL;
			rear -> next = NULL;
		} 
		else
		{
			rear-> next=ptr;
			rear= ptr;
			rear->next=NULL;
		}
	}
}
void delete(struct node *ptr) 
{  
	if (front == NULL) 
	{  
		printf("QUEUE Underflow");  
		return;  
	} 
	else 
	{  
		ptr = front;  
		front = front -> next;  
		free(ptr);    
	}   
}
int main() 
{
	struct node *head = NULL;
	int ch,i,e;
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter an element:");
				scanf("%d",&e);
				input(head,e);
			}			
			break;
			case 2:
			{
				delete(front);
				break;
			}
			case 3:
			{
				if(front==NULL)
				{
					printf("QUEUE IS EMPTY\n");
				}
				else
				{
					struct node *temp=front;
					while(temp->next!=NULL)
					{
						printf("\n | %d |",temp->data);
						temp=temp->next;
					}
						printf("\n | %d |\n",temp->data);
						printf(" ______");
				}
				break;
			}
			case 4:
			{
				printf("EXITING");
				exit(0);
			}
		}	
	}
}

