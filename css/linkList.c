#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;
};
struct node* first = NULL;
struct node* save;
struct node* pred;

void insertAtFirst();
void insertAtLast();
void deleteFromFirst();
void deleteFromLast();
void display();
void main()
{
	int choice;
	int quit = 0;
	do
	{
		printf("\nOperations:-\n1.Insert at First\n2.Insert at Last\n3.Delete from First\n4.Delete from Last\n5.Display\n6.Quit\nChoose Operation : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertAtFirst();
				break;
			case 2:
				insertAtLast();
				break;
			case 3:
				deleteFromFirst();
				break;
			case 4:
				deleteFromLast();
				break;
			case 5:
				display();
				break;
			case 6:
				quit = 1;
				break;
			default:
				printf("\nInvalid choice!");
		}
	}while(quit == 0);
	
}
void insertAtFirst()
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->info = 10;
	newNode->link = NULL;
	first = newNode;
}
void insertAtLast()
{

}
void deleteFromFirst()
{

}
void deleteFromLast()
{

}
void display()
{
	printf("Linked List:-\n%d",first->info);
}