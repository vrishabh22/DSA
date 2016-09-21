#include <stdio.h>
#include <stdlib.h>

int a[50];
int front=-1;
int rear=-1;


void insert(int a[])
{
	int k;
	if(rear==49)
	{
		printf("OVERFLOW\n");

	}
	else
	{
		if(front==-1)
		front=0;
		printf("Enter the element in the queue\n");
		scanf("%d",&k);
		rear=rear+1;
		a[rear]=k;
	}
}

void remove(int a[])
{
	if(front==-1)
	{
		printf("UNDERFLOW\n");
	}
	else
	{

	printf("Deleted element is %d\n",a[front]);
	front=front+1;
	}
}

void display(int a[])
{
	for(int i=front;i<=rear;i++)
	{
		printf("%d\n",a[i]);
	}
}

int  main()
{
	/*front=-1;
	rear=-1;*/
	int n;
	while(1)
	{
		printf("******MAIN MENU***********\n");
		printf("Enter 1 to insert element\n");
		printf("Enter 2 to delete an element\n");
		printf("Enter 3 to display\n");
		printf("Enter 4 to EXIT\n");
		printf("*****Choose your option*******\n");
		scanf("%d",&n);
		printf("----------------------------------\n");

		switch(n)
		{
			case 1:
				insert(a);
				break;
			case 2:
				remove(a);
				break;
			case 3:
				display(a);
				break;
			case 4:exit(1);

			default:
				printf("Wrong Choice\n");
		}
	}

return 0;
}
