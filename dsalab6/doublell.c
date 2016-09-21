#include <stdio.h>
#include <stdlib.h>

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
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	 if (front==NULL)
	    {
	    	  front=temp;
	    	  front->val=s;
	    	  rear=front;
	    	  front->forward=NULL;
	    	  front->backward=NULL;
	    	  return;
		}
		else
		{
			  rear->forward=temp;
			  temp->backward=rear;
			  rear=temp;
			  rear->val=s;
			  rear->forward=NULL;
			  return;
		}
}

void display()
{
	 if(front==NULL)
	  {
	  	 printf("empty\n");
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


void insert()
{
	int count=1,s,k,pos,g;
	struct node* new_node;
	 new_node=(struct node*)malloc(sizeof(struct node));

	struct node* temp=front;
	struct node* temp1;
	if (front==NULL)
	    {
		printf("Enter the element to be added\n");
		scanf("%d",&s);
	    	  front=temp;
	    	  front->val=s;
	    	  rear=front;
	    	  front->forward=NULL;
	    	  return;
	    }
	else
	{	
		
		if(front!=NULL)
		{
			printf("Enter the position at which you have to add\n ");
			scanf("%d",&pos);
			
			if(pos==1)
			{
				printf("Enter the elemet to be added\n");
				scanf("%d",&k);
				new_node->val=k;
				new_node->forward=front;
				new_node->backward=NULL;
				front=new_node;
				return;
			}
			else
			{		
				printf("Enter the elemet to be added\n");
				scanf("%d",&g);
				new_node->val=g;
				while(count<pos && temp->forward!=NULL)
				{
					count++;
					temp1=temp;
					temp=temp->forward;
				}
				if(count==pos)
				{
					temp1->forward=new_node;
					new_node->forward=temp;
					temp->backward=new_node;
					new_node->backward=temp1;
					return;
			
				}
				
				}
			}
		else
		{
			rear->forward=new_node;
			new_node->backward=rear;
			new_node->forward=NULL;
			rear=new_node;	
			return;
		
		}
	}

			
}

void delete_ele(int s)
{
	struct node* temp;
	temp=front;
	int count=1;
	struct node* temp1;
	if(front==NULL)
	{
		printf("Linked List is empty\n");
	}
	else
	{
		if(front!=NULL)
		{
				if(s==1)
				{
					
					front=front->forward;
					//temp->forward=NULL;
					return;
				}
				else
				{
					while(count<s && temp->forward!=NULL)
					{
							count++;
							temp1=temp;
							temp=temp->forward;
					}
					if(count==s)
					{
						temp1->forward=temp->forward;
						(temp->forward)->backward=temp1;
					}
					return;
				}
		}
		else
		{
			while(temp->forward!=NULL)
			{
				//temp->forward=temp1;
				temp1=temp;
				temp=temp->forward;
			}
			temp1->forward=NULL;
			return;
		}
	}
}
	



int main()
{
	 front=NULL;
	 rear=NULL;
	 
	 int ch,k,a,y;
	do
	{
		 printf("**************MAIN MENU****************\n");
		 printf("1--Insert element to  a double linked list\n");
		 printf("2-- Display double linked list\n");
		 printf("3--Delete an element from double linked list\n");
		 printf("4--Create a double linked list\n");
		 printf("************Choose your option*************\n");
		scanf("%d",&ch);
		     switch (ch)
			 {
			 	case 1:
					insert();
					break;

				case 2:
					display();
					break;
				case 3:
					printf("Enter position from which element is to be deleted\n");
					scanf("%d",&y);
					delete_ele(y);
					break;
				case 4:
					printf("Enter a element to be added\n");
					scanf("%d",&y);
					create_dll(y);
					break;
			   	   
			    default :
			 	 printf("wrong entry ");
			 }
			 printf("\nEnter non zero to continue\n");
			 scanf("%d",&ch);
	}while(ch!=0);
	return 0;
}

