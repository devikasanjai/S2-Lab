#include <stdio.h>
#include <stdlib.h>
void main()
{	
	struct node
	{
		int data1;
		int data2;
		struct node *next;
	};
	struct node *head1=NULL, *pos1=NULL, *tail1=NULL,*head2=NULL, *pos2=NULL, *tail2=NULL, *head3=NULL, *pos3=NULL, *tail3=NULL;
	int cf,p,i,sum;
	printf("\nEnter highest power of the polynomial: ");
	scanf("%d",&p);
	printf("\nEnter 1st equation");
	for(i=p;i>=0;i--)
	{
		printf("\nEnter Coefficient for x^%d: ",i);
		scanf("%d",&cf);
		if(head1==NULL)
		{
			head1=(struct node*)malloc(sizeof(struct node));
			head1->data1=cf;
			head1->data2=i;
			pos1=head1;
			tail1=head1;
		}
		else
		{
			tail1->next=(struct node*)malloc(sizeof(struct node));
			tail1=tail1->next;
			tail1->data1=cf;
			tail1->data2=i;
		}
	}
	printf("\nEnter 2nd equation");
	for(i=p;i>=0;i--)
	{
		printf("\nEnter Coefficient for x^%d: ",i);
		scanf("%d",&cf);
		if(head2==NULL)
		{
			head2=(struct node*)malloc(sizeof(struct node));
			head2->data1=cf;
			head2->data2=i;
			pos2=head2;
			tail2=head2;
		}
		else
		{
			tail2->next=(struct node*)malloc(sizeof(struct node));
			tail2=tail2->next;
			tail2->data1=cf;
			tail2->data2=i;
		}
	}
	for(i=p;i>=0;i--)
	{
		sum=pos1->data1+pos2->data1;
		pos1=pos1->next;
		pos2=pos2->next;
		if(head3==NULL)
		{
			head3=(struct node*)malloc(sizeof(struct node));
			head3->data1=sum;
			head3->data2=i;
			pos3=head3;
			tail3=head3;
		}
		else
		{
			tail3->next=(struct node*)malloc(sizeof(struct node));
			tail3=tail3->next;
			tail3->data1=sum;
			tail3->data2=i;
		}
	}
	printf("\nSum of Polynomials= ");
	for(i=p;i>=0;i--)
	{
		if(i==0)
		{
			printf("%dx^%d\n",pos3->data1,pos3->data2);
		}		
		else
		{
			printf("%dx^%d+",pos3->data1,pos3->data2);
		}		
		pos3=pos3->next;
	}
}
