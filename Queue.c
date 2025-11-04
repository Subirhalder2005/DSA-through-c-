//Queue implementation using array
#include<stdio.h>
#include<process.h>
#define size 5
int q[size],f=-1,r=-1;
// function for insert element
void enqueue(int x)
{
	if(r==size-1)
	   printf("Q is full");
	else
	{
		r=r+1;
		q[r]=x;
		if(f==-1)
		  f=0;
	}
}
//function for delete element
void dequeue()
{
	if(f==-1 && r==-1)
	  printf("Q is empty");
	else if(f==r)
	{
		printf("%d \n",q[f]);
		f=-1;
		r=-1;
	}
	else
	{
		printf("%d \n",q[f]);
		f=f+1;
	}	  
}
//function for display all element
void display()
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("%d ",q[i]);
	}
}
int main()
{
	int ch,item;
	printf("\n press 1 for append \n press 2 for delete \n press 3 for display \n press 4 for exit \n ");
	while(1)
	{
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n enter item :");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}
