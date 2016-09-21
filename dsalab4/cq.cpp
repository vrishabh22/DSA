#include <stdio.h>
#include <stdlib.h>
#define max 5

int a[max];
int front=-1;
int rear=-1;



void insert(int a[])

{

	int x;

	if((front==(rear+1)%max)||(front==0 && rear==max-1))

	{

		printf("Queue overflow\n");

	}

	else

	{

		if(front==-1)

		front=0;

		printf("Enter the element\n");

		scanf("%d",&x);

		rear=rear+1%max;

		a[rear]=x;

	}

}
void remove(int a[])
{
	if(front==-1 && rear==-1)

	{

		printf("Queue underflow\n");
	}
	else if(front==rear)
	{
	front=-1;
		rear=-1;
	}
	else
	{

		printf("Deleted element is %d\n",a[front]);
		front=front+1%max;
	}

}
void display(int a[])
{
	int i;
	printf("Queue is :- \n");
	for(i=front;i<=rear;i++)

	{

		printf("%d\n",a[i]);

	}

}
int main()
{

	int n;
	while(1)

	{

		printf("******MAIN MENU***********\n");
		printf("Enter 1 to insert element\n");
		printf("Enter 2 to delete an element\n");
		printf("Enter 3 to display\n");
		printf("Enter 4 to EXIT\n");
		printf("*****Choose you option*******\n");
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


