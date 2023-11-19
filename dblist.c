#include<stdio.h>
#include<stdlib.h>

void main()
{
	struct node
	{
		struct node *prev;
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL,*temp=NULL;

	int ch,entry,count=0,find,i;
	while(1)
	{
		printf("\n1:Insert at beginning\n2:Insert at end\n3:Delete head\n4.Delete in btw\n5:Delete tail\n6:Display forward\n7:Display reverse\n8:Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			{
				printf("Enter data: ");
				scanf("%d",&entry);
				if(head==NULL)
				{
					head=(struct node*)malloc(sizeof(struct node));
					head->prev=NULL;
					head->data=entry;
					head->next=NULL;
					pos=head;
					tail=head;
				}

				else
				{
					temp=(struct node*)malloc(sizeof(struct node));
					temp->prev=NULL;
					temp->data=entry;
					temp->next=head;
					head=temp;
					head->next->prev=head;
				}
				break;
			}


			case 2:
			{
				printf("Enter data: ");
				scanf("%d",&entry);
				if(head==NULL)
				{
					head=(struct node*)malloc(sizeof(struct node));
					head->prev=NULL;
					head->data=entry;
					head->next=NULL;
					pos=head;
					tail=head;
				}

				else
				{
					tail->next=(struct node*)malloc(sizeof(struct node));
					tail->next->prev=tail;
					tail->next->data=entry;
					tail->next->next=NULL;
					tail=tail->next;
				}
				break;
			}

			case 3:
			{
				if(head==NULL)
				{
					printf("Underflow");
					break;
				}

				if(head->next==NULL)
				{
					head=NULL;
					break;
				}

				struct node *del=head;
				head=head->next;
				del->next=NULL;
				head->prev=NULL;
				free(del);
				break;
			}

			case 4:
			{
				struct node *temp=head;
				printf("Enter position of data: ");
				scanf("%d",&entry);
				for(i=0;i<entry-1;i++)
					{
						temp=temp->next;
					}

				struct node *del=temp->next;
				temp->next=temp->next->next;
				temp->next->prev=temp;
				del->prev=NULL;
				del->next=NULL;
				free(del);
				break;
			}

			case 5:
			{
				if(head==NULL)
				{
					printf("Underflow");
					break;
				}

				if(head->next==NULL)
				{
					head=NULL;
					break;
				}

				struct node *del=tail;
				tail=tail->prev;
				del->prev=NULL;
				tail->next=NULL;
				free(del);
				break;
			}

			case 6:
			{
				pos=head;
				if(pos==NULL)
				{
					printf("No Elements");
				}
				else
				{
					printf("\nElements are: ");
					while(pos!=NULL)
					{
						printf("%d ",pos->data);
						pos=pos->next;
					}
				}
				printf("\n");
				break;
			}

			case 7:
			{
				pos=tail;
				printf("\nElements are: ");
				while(pos!=NULL)
				{
					printf("%d ",pos->data);
					pos=pos->prev;
				}
				printf("\n");
				break;
			}

			case 8:
			{
				printf("Exiting program\n");
				exit(0);
			}

		
		}
	}
}


