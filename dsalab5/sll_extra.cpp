#include <stdio.h>
#include <stdlib.h>
struct node
{
	int val;
	struct node* link;
};
struct node* front;
struct node* rear;

void create(int s)
{
	
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
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
			  rear->link=NULL;
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
	    	  front->link=NULL;
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
				new_node->link=front;
				front=new_node;
				return;
			}
			else
			{		
				printf("Enter the elemet to be added\n");
				scanf("%d",&g);
				new_node->val=g;
				while(count<pos && temp->link!=NULL)
				{
					count++;
					temp1=temp;
					temp=temp->link;
				}
				if(count==pos)
				{
					new_node->link=temp;
					temp1->link=new_node;
					return;
			
				}
				
				}
			}
		else
		{
			rear->link=new_node;
			rear=new_node;
			new_node->link=NULL;	
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
					
					front=front->link;
					temp->link=NULL;
					return;
				}
				else
				{
					while(count<s && temp->link!=NULL)
					{
							count++;
							temp1=temp;
							temp=temp->link;
					}
					if(count==s)
					{
						temp1->link=temp->link;
					}
					return;
				}
		}
		else
		{
			while(temp->link!=NULL)
			{
				temp->link=temp1;
				temp1=temp;
				temp=temp->link;
			}
			temp1->link=NULL;
			return;
		}
	}
}
	


void display()
{
	 if(front==NULL)
	  {
	  	 printf("UNDERFLOW\n");
	  	  return;
	  }
	  else
	  {
	  	 struct node* temp= front;
	  	 while(temp!=NULL)
	  	  {
	  	  	 printf("%d --> ",temp->val);
	  	  	 temp=temp->link;
			}
			printf("\n");
			return;
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
		 printf("1--Insert element to  a linked list\n");
		 printf("2-- Display a linked list\n");
		 printf("3--Delete an element from linked list\n");
		 printf("4--Create a linked list\n");
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
					create(y);
					break;
			   	   
			    default :
			 	 printf("wrong entry ");
			 }
			 printf("\nEnter non zero to continue\n");
			 scanf("%d",&ch);
	}while(ch!=0);
	return 0;
}




