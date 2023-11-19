#include <stdio.h>
#include <stdlib.h>
void main()
 {
   struct node
   {  int data;
      struct node*next;
   };
   struct node *head=NULL,*pos=NULL,*tail=NULL;
   int ch,entry,e;
   while(1)
   {
     printf("\n 1:insert \n 2:display \n 3:count \n 4:search \n 5:Delete\n 6:exit");
     printf("\n enter your choice");
     scanf("%d",&ch);
     switch(ch)
     { case 1:{
               printf("\n enter data");
               scanf("%d",&entry);
               if (head==NULL)
               {head=(struct node*)malloc(sizeof(struct node));
                head->data=entry;
                pos=head;
                tail=head;
               }
               else
                {tail->next=(struct node*)malloc(sizeof(struct node));
                 tail=tail->next;
                 tail->data=entry;
                }break;
              }
              case 2:
                 {pos=head;
                  printf("\n elements are");
                  while(pos!=NULL)
                   {printf("\t %d",pos->data);
                    pos=pos->next;
                    }break;
                 }
              case 3:
                  {pos=head;
                   int c=0;
                   while(pos!=NULL)
                    {c=c+1;
                     pos=pos->next;}
                    printf("number of elements=%d",c);break;
                  }
             case 4:
                  { int s,e=0;
                    printf("enter element to be searched");
                    scanf("%d",&s);
                    pos=head;
                    while(pos!=NULL)
                    { if (pos->data==s)
                       {
                       		e=1;
                        }
                        pos=pos->next;}
                       if(e==0)
                        {
                       		printf("element not present");
                		}
                		else
                		{
                			printf("element present");
                		}
                        break;}
              case 5:
              	  {
              	  	struct node *temp=head;
              	  	printf("enter position of data to be deleted");
              	  	scanf("%d",&e);
              	  	if(e==0)
              	  	{
              	  		head=head->next;
              	  		temp->next=NULL;
              	  		free(temp);
              	  	}
              	  	else
              	  	{
              	  		for(int i=0;i<e-1;i++)
              	  		{
              	  			temp=temp->next;
              	  			struct node*del=temp->next;
              	  			temp->next=temp->next->next;
              	  			del->next=NULL;
              	  			free(del);
              	  		}
              	  	}
              	  	
              	  	break;}
              case 6:
                   {printf("\n good bye");
                    exit(0);
                   }
              }}}
                
                
