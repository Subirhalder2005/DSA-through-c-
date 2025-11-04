//Program for binary tree execution
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
//function for create node
struct node *create()
{
	int value;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data for new node and -1 for no node: ");
	scanf("%d",&value);
	newnode->data=value;
	if(value==-1)
	   return NULL;
	printf("\n Enter the value for left child node of %d",value);
	newnode->left=create();
	printf("\n Enter the value for right child node of %d",value);
	newnode->right=create();
	return newnode;
}
// display function for inorder
void inorder_dis(struct node *root)
{
	if(root==NULL)
	  return;
	inorder_dis(root->left);
	printf("\n Inorder node value is %d",root->data);
	inorder_dis(root->right);
}
// display function for preorder
void preorder_dis(struct node *root)
{
	if(root==NULL)
	  return;
	printf("\n preorder node value is %d",root->data);
	preorder_dis(root->left);
	preorder_dis(root->right);
}
// display function for postorder
void postorder_dis(struct node *root)
{
	if(root==NULL)
	  return;
	postorder_dis(root->left);
	postorder_dis(root->right);
	printf("\n postorder node value is %d",root->data);
}
int main()
{
	struct node *root=NULL;
	root=create();
	preorder_dis(root);
	inorder_dis(root);
	postorder_dis(root);
	return 0;
}
