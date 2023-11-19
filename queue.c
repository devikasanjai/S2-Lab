#include<stdio.h>
#include<stdlib.h>
#define n 5
int rear=-1;
int front=-1;
int queue[n];
int isfull()
{
	if(rear==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enque(int val)
{
	if(isfull())
	{
		printf("Queue is full");
	}
	else
	{
		if(front==-1)
		{
			front =0;
		}
		rear++;
		queue[rear]=val;
	}
}
void dequeue()
{
	if(isempty())
	{
		printf("Queue is empty");
	}
	else
	{
		front++;
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}
void main()
{
	while(1)
	{		
		printf("\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
		int ch;
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				int v;
				printf("Enter Element");
				scanf("%d",&v);
				enque(v);
				break;
			}
			case 2:
			{
				dequeue();
				break;
			}
			case 3:
			{
				int i,x;
				x=rear;
				for(i=rear;i>=-1;i--)
				{
					printf("\n%d",queue[i]);
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
