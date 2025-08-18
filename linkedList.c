#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>
struct student
{
	int roll;
	float marks;
	char name[50];
	struct student*add;
};
struct student *head=NULL,*last=NULL;
void append()
{
	struct student*temp;
	temp=(struct student*)malloc(sizeof(struct student));
	printf("Enter the student name :");
	fflush(stdin);
	gets(temp->name);
	printf("Enter roll no.:");
	scanf("%d",&temp->roll);
	printf("Enter the marks of student :");
	scanf("%f",&temp->marks);
	temp->add=NULL;
	if(head==NULL)
	{
		head=temp;
		last=temp;
	}
	else
	{
		last->add=temp;
		last=temp;
	}
}
void display()
{
	struct student*temp=head;
	while(temp!=NULL)
	{
		if(temp->marks>50)
		{
			printf("Name :");
			puts(temp->name);
			fflush(stdout);
			printf("\n Roll no. :%d",temp->roll);
			printf("\n percentage marks :%f",temp->marks);
		}
		temp=temp->add; 
	}
}
int main()
{
	int ch;
	printf("Enter name ,roll no. , percentage marks");
	while(1)
	{
		printf("\n press 1 for append \n press 2 for display \n press 3 for exit \n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
		}
	}
	getch();
	return 0;
}
