#include<cstdio>
#include<iostream>

using namespace std;

struct node 
{
	int val;
	struct node* backward;
	struct node* forward;
};

struct node* front;
struct node* rear;

void create_dll(int s)
{
	struct node* temp=new node();
	 if (front==NULL)
	    {
	    	  front=temp;
	    	  front->val=s;
	    	 // rear=front;
	    	  front->forward=NULL;
	    	  front->backward=NULL;
	    	 // return;
		}
		else
		{

		temp->val=s;
		front->backward=temp;
		temp->forward=front;
		temp->backward=NULL;
			//  rear->forward=temp;
			 // temp->backward=rear;
			 // rear=temp;
			 // rear->val=s;
			 // rear->forward=NULL;
			  return;
		}
}

void display()
{
	 if(front==NULL)
	  {
	  	 printf("list is empty\n");
	  	  return;
	  }
	  else
	  {
	  	 struct node* temp= front;
	  	 while(temp!=NULL)
	  	  {
	  	  	 printf("%d --><--  ",temp->val);
	  	  	 temp=temp->forward;
			}
			printf("\n");
			return;
	  }
}

/* void insert_beg(int s)
{
	struct node* new_node=new node();
	new_node->val=s;
	new_node->forward=front;
	front=new_node;
	new_node->backward=NULL;
	return;
} */

/* void remove_beg_ele()
{
	front=front->forward;
	return;
}*/

/*void insert_end(int s)
{
	struct node* new_node=new node();
	new_node->val=s;
		rear->forward=new_node;
		new_node->backward=rear;
		rear=new_node;
		new_node->forward=NULL;
		return;
}*/

/*void remove_last_ele()
{
	if(front==NULL)
	{
		printf("Linked List is Empty");
	}
	else
	{
		struct node* temp=rear;
		struct node* temp1;
		rear=rear->backward;
		rear->forward=NULL;
		return;
	}
}*/

void insert_nth(int s, int n )
{
		int count=0;
	struct node* p=front;
	struct node* new_node=new node();
	new_node->val=s;
		struct node* q;
		if(n==1)
		{
		new_node->forward=front;
		new_node->backward=NULL;
		front->backward=new_node;
		front=new_node;
		return;
		}
		while(count<n && p->forward!=NULL)
		{
			count++;
			q=p;
			p=p->forward;
		}
		//if(count==s)
		
			q->forward=new_node;
			new_node->forward=p;
			p->backward=new_node;
			new_node->backward=q;
		
		return;
}

void delete_nth(int n)
{
		int count=1;
	struct node* p=new node();
		p=front;
	struct node* q;
if(n==1)
{

p->forward->backward=NULL;
front=p->forward;
return;
}
		while(count<n && p->forward!=NULL)
		{
			count++;
			q=p;
			p=p->forward;
		}
		//if(count==s)
		
		q->forward=p->forward;
		(p->forward)->backward=q;
		
		return;
}

int main()
{
	 front=NULL;
	// rear=NULL;
	 int ch,k,a;
	do
	{
		 printf("*****MAIN MENU*****\n");
		 printf("1--Create  a linked list\n");
		 printf("2-- Display a linked list\n");
		// printf("3--Insert element at beginning\n");
		// printf("4--Delete beginning element\n");
		// printf("5--Delete Last element\n");
		// printf("6-- Insert an element at End of list\n");
		 printf("3--Insert an element at nth position\n");
		 printf("4--Delete an element from nth position\n");
		 //printf("9--")
		 printf("******Choose your option*******\n");
		scanf("%d",&ch);
		     switch (ch)
			 {
			 	case 1:
			 	 	  printf("enter number to add\n");
			 	 	   scanf("%d",&k);
			 	 	   create_dll(k);
			 	 	break;
			 	 	
			    case 2:
			   	 display();
			   	   break;
			   	   
			   /*	case 3:
			   		printf("Enter element to be add \n");
			   		scanf("%d",&k);
			   		insert_beg(k);
			   		break;
			   */		
			   /*	case 4:
			   		remove_beg_ele();
			   		break;
			   */		
			   /*	case 5:
			   		remove_last_ele();
			   		break;
			   */		
			   /*	case 6:
			   		printf("Enter the element to be added :- \n");
			   		scanf("%d",&k);
			   		insert_end(k);
			   		break;
			   */		
			   	case 3:
			   		printf("Enter element value and position at which element is to be added \n");
			   		scanf("%d",&a);
			   		scanf("%d",&k);
			   		insert_nth(a,k);
			   		break;
			   		
			   	case 4:
				   printf("Enter position from which element is to be deleted\n");
			   		scanf("%d",&a);
					   delete_nth(a)	;
					   break;
			   	   
			    default :
			 	 printf("wrong entry ");
			 }
			 printf("\nEnter non zero to continue\n");
			 scanf("%d",&ch);
	}while(ch!=0);
	return 0;
}
