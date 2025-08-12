#define MAX 3
#include<stdio.h>
#include<process.h>
int top=-1;
int main()
{
	int stack[10],item,n,choice;
	int isFull();
	void push(int[],int);
	void display(int[]);
	int isEmpty();
	int pop(int[]);
	while(1)
	{
		printf("\n press 1 to push\n press 2 to pop\n press 3 to display\n press 4 to exit  ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n enter item :");
				scanf("%d",&item);
				push(stack,item);
				break;
			case 2:
				item= pop(stack);
				printf("popped element is %d",item);
				break;
			case 3:
				display(stack);
				break;
			case 4:
				exit(0);
		}
	}
	getch();
	return 0;
}
int isFull()
{
	if(top==MAX-1)
	   return 1;
	else
	   return 0;
}
void push(int stack[10],int item)
{
	int p;
	p=isFull();
	if(p==1)
	    printf("Stack is over flow");
	else
	{ 
	    top=top+1;
	    stack[top]=item;
	}
}
int isEmpty()
{
	if(top==-1)
	    return 1;
	else
	    return 0;
}
int pop(int stack[10])
{
	int p,item;
	p=isEmpty();
	if(p==1){
	
	   printf("Stack under flow");
	   return -1;
    }
	else
	{
		item=stack[top];
		top=top-1;
	}
	return item;
}
void display(int stack[10])
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d\n",stack[i]);
	}
}
