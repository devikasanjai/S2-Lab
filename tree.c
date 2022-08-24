#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* newnode(int v) 
{
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data=v;
	new->left=NULL;
	new->right=NULL;
	return(new);
}
void preorder(struct node *root)
{
	if(root==NULL)
		return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
void main()
{
	struct node*root;
	root=newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	root->right->right = newnode(7);
	int ch;
	printf("1.PRE-ORDER \n2.IN-ORDER \n3.POST-ORDER\n4.EXIT\n");
	while(1)
	{
	    printf("Enter your choice\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	        case 1:
	        {
	            	printf("Pre order traversal: \n");
	                preorder(root);
	                printf("\n");
	                break;
	        }
	        case 2:
	        {
	            	printf("\nIn order traversal: \n");
	            	inorder(root);
	            	printf("\n");
	            	break;
	        }
	        case 3:
	        {
	            	printf("\nPost order traversal: \n");
	                postorder(root);
	                printf("\n");
	                break;
	        }
	        case 4:
	        {
	            printf("Exiting");
	            exit(0);
	        }
	        
	    }
	}
}
