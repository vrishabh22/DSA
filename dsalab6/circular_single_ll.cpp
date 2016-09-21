#include<cstdio>
//#include<conio>
#include<iostream>
using namespace std;

struct node
{
	 int val;
	 struct node* link;
};

struct node* front;
struct node* rear;

void create(int s)
{
	struct node* temp=new node();
	 if (front==NULL)
	    {
	    	  front=temp;
	    	  front->val=s;
	    	  rear=front;
	    	  front->link=NULL;
	    	  return;
		}
		
		else
		{
			  rear->link=temp;
			  rear=temp;
			  rear->val=s;
			  rear->link=front;
			  return;
		}
}

void count()
{
	struct node* temp=front;
	int count=0;
	if(front==NULL)
	{
		printf("No element is there in list\n");
		return;
	}
	else
	{
		do
		{
			temp=temp->link;
			count++;
		}while(temp!=front);
		printf("Number of element in circular linked list is %d \n",count);
		return;
	}
}

void display()
{
	struct node* temp=front;
	if(front==NULL)
	{
		printf("Linked list is Empty\n");
		return;
	}
	else
	{
		
		do
		{
		
		printf(" %d --> ",temp->val);
		temp=temp->link;
		}while(temp!=front);
	return;
	}
}

void insert_ele_beg(int s)
{
	struct node* temp=new node();
	temp->val=s;
	temp->link=temp;
	
	rear->link=temp;
	temp->link=front;
	front=temp;
}

void delete_last_ele()
{
	struct node* temp1=front;
	while(temp1->link!=rear)
	{
		temp1=temp1->link;
	}
	temp1->link=front;
	rear=temp1;
}

void remove_beg_ele()
{
	struct node* temp;
	temp=front;
	front=front->link;
	rear->link=front;
	
	return;
}

void insert_end(int s)
{
	struct node* new_node=new node();
	new_node->val=s;
	new_node->link=new_node;
	
		rear->link=new_node;
		
		rear=new_node;
		new_node->link=front;
		return;
		
}

int main()
{
	 front=NULL;
	 rear=NULL;
	 
	 int ch,k,a;
	do
	{
		 printf("*****MAIN MENU*****\n");
		 printf("1--Create  a linked list\n");
		 printf("2-- Display a linked list\n");
		 printf("3--Insert element at beginning\n");
		 printf("4--Delete last element\n");
		 printf("5--Delete beginning element\n");
		 printf("6-- Insert an element at End of list\n");
		 /*printf("7--Insert an element at nth position\n");
		 printf("8--Delete an element from nth position\n");*/
		 printf("9--Count no of element in circular linked list\n ");
		 printf("******Choose your option*******\n");
		scanf("%d",&ch);
		     switch (ch)
			 {
			 	case 1:
			 	 	  printf("enter number to add\n");
			 	 	   scanf("%d",&k);
			 	 	   create(k);
			 	 	break;
			 	 	
			    case 2:
			   	 display();
			   	   break;
			   	   
			   	case 3:
			   		printf("Enter element to be add \n");
			   		scanf("%d",&k);
			   		insert_ele_beg(k);
			   		break;
			   		
			   	case 4:
			   		delete_last_ele();
			   		break;
			   		
			   	case 5:
			   		remove_beg_ele();
			   		break;
			   		
			   	case 6:
			   		printf("Enter the element to be added :- \n");
			   		scanf("%d",&k);
			   		insert_end(k);
			   		break;
			   		
			   	/*case 7:
			   		printf("Enter element value and position at which element is to be added \n");
			   		scanf("%d",&a);
			   		scanf("%d",&k);
			   		insert_nth(a,k-1);
			   		break;
			   		
			   	case 8:
				   printf("Enter position from which element is to be deleted\n");
			   		scanf("%d",&a);
					   delete_nth(a)	;
					   break;*/
				case 9:
					count();
					break;
			   	   
			    default :
			 	 printf("wrong entry ");
			 }
			 printf("\nEnter non zero to continue\n");
			 scanf("%d",&ch);
	}while(ch!=0);
	return 0;
}
