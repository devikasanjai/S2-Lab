#include<stdio.h>
#include<stdlib.h>
#define n 5
int top =-1;
int stack[n];
int isfull()
{
	if(top==n-1)
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
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0; 
	}
}
void push(int val)
{
	if(isfull())
	{
		printf("\n overflow");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("\n%d pushed",stack[top]);
	}
}
void pop()
{
	if(isempty())
	{
		printf("\n underflow");
	}
	else
	{
		printf("\n%d popped",stack[top]);
		stack[top]=-1;
		top--;
	}
}

void findtop()
{
	printf("\n top position %d",top);
	printf("\n top value %d",stack[top]);
}
void display()
{
	int i,x;
	x= top;
	for ( i=x;i>=0;i--)
	{
		printf("\n %d ",stack[i]);
	}
}
void main()
{
	while (1)
	{
		printf("\n1.push\n2.pop\n3.Find top value\n4.Display\n5.Exit\n");
		int ch;
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				int a;
				printf("enter value to be pushed:");
				scanf("%d",&a);
				push(a);
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				findtop();
				break;
			}
			case 4:
			{
				display();
				break;
			}
			case 5:
			{
				printf("EXITING");
				exit(0);
			}
		}
	}
}


