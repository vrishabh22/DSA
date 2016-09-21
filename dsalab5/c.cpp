#include <stdio.h>
#include <stdlib.h>
//using namespace std;

struct Node
{
	 int data;
	 struct Node *next;
};

struct Node* head;
struct Node* tail;

void create(int s)
{
		struct Node* p=new Node();
	 if (head==NULL)
	    {
	    	  head=p;
	    	  head->data=s;
	    	  tail=head;
	    	  head->next=NULL;
	    	  return;
		}
			else
		{
			  tail->next=p;
			  tail=p;
			  tail->data=s;
			  tail->next=NULL;
			  return;
		}
}

void display()
{
	 if(head==NULL)
	  {
	  	 printf("UNDERFLOW\n");
	  	  return;
	  }
	  else
	  {
	  	 struct Node* temp= head;
	  	 while(temp!=NULL)
	  	  {
	  	  	 printf("%d --> ",temp->data);
	  	  	 temp=temp->next;
			}
			printf("\n");
			return;
	  }
}
void remove_last_ele()
{
	if(head==NULL)
	{
		printf("Underflow");
	}
	else
	{
		struct Node* temp=new Node();
		temp=head;
		struct Node* temp1;
		while(temp->next!=NULL)
		{
			temp1=temp;
			temp=temp->next;
		}
		free(temp);
		temp1->next=NULL;
		return;
	}
}

void insert_beg(int s)
{
	struct Node* new_node=new Node();
	new_node->data=s;
	new_node->next=head;
	head=new_node;
	return;
}


void remove_beg_ele()
{
	
struct Node* temp=new Node();
	temp=head;
	head=head->next;
	free(temp);

	return;
}

void insert_end(int s)
{
	struct Node* new_node=new Node();
	new_node->data=s;

		tail->next=new_node;
		tail=new_node;
		new_node->next=NULL;
		return;

}

void insert_nth(int n, int s)
{
		int count=1;
	struct Node* p=head;
	struct Node* new_node=new Node();
	new_node->data=n;
		//struct node* temp1;
	struct Node* q;
		while(count<s && p->next!=NULL)
		{
			count++;
			q=p;
			p=p->next;
			
		}
		
		//temp->link=new_node;
		//new_node=temp;
		
			new_node->next=p;
			q->next=new_node;
			
		
		/*temp->link=new_node;
		temp=new_node;
		new_node->link=temp1;*/
		return;
		
		
}

void delete_nth(int s)
{
		int count=1;
	struct Node* p=head;
	struct Node* q;
		while(count<s && p->next!=NULL)
		{
			count++;
			q=p;
			p=p->next;
		}
		
		
			q->next=p->next;
		
		return;
}


int main()
{
	 head=NULL;
	 tail=NULL;
	 
	 int ch,k,a;
	do
	{
		 printf("*****MAIN MENU*****\n");
		 printf("1--Create  a linked list\n");
		 printf("2-- Display a linked list\n");
		 printf("3--Insert element at beginning\n");
		 printf("4--Delete beginning element\n");
		 printf("5--Delete Last element\n");
		 printf("6-- Insert an element at End of list\n");
		 printf("7--Insert an element at nth position\n");
		 printf("8--Delete an element from nth position\n");
		 //printf("9--")
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
			   		insert_beg(k);
			   		break;
			   		
			   	case 4:
			   		remove_beg_ele();
			   		break;
			   		
			   	case 5:
			   		remove_last_ele();
			   		break;
			   		
			   	case 6:
			   		printf("Enter the element to be added :- \n");
			   		scanf("%d",&k);
			   		insert_end(k);
			   		break;
			   		
			   	case 7:
			   		printf("Enter element value and position at which element is to be added \n");
			   		scanf("%d",&a);
			   		scanf("%d",&k);
			   		insert_nth(a,k-1);
			   		break;
			   		
			   	case 8:
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
