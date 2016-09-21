#include<cstdio>
#include<iostream>
using namespace std;
struct stack

{

	 int val;

	 struct stack* link;

};



struct stack* top;

struct stack* rear;

void push(int s)

{

	

	struct stack* temp=new stack();

	 if (top==NULL)

	    {

	    	  top=temp;

	    	  top->val=s;

	    	  rear=top;

	    	  top->link=NULL;

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



void display()

{

	int i=0,a[10],count=-1;

	 if(top==NULL)

	  {

	  	 printf("Stack is empty\n");

	  	  return;

	  }

	  else

	  {

	  	 struct stack* temp= top;

	  	 while(temp!=NULL)

	  	  {

	  	  	 //printf("\t%d\n ",temp->val);

	  	  	 a[i]=temp->val;

	  	  	 i++;

	  	  	 temp=temp->link;

	  	  	 count++;

			}

			printf("Stack is : \n");

			for(i=count;i>=0;i--)

			{

			printf("\t%d",a[i]);

			printf("\n");}

			return;

	  }

}



void pop()

{

	if(top==NULL)

	{

		printf("UNDERFLOW");

	}

	else

	{

		struct stack* temp= top;

		struct stack* temp1;

		while(temp->link!=NULL)

		{

			//temp->link=temp1;

			temp1=temp;

			temp=temp->link;

			

			

			

		}

		temp1->link=NULL;

		return;

	}

}



int main()

{

	 top=NULL;

	 rear=NULL;

	 

	 int ch,k,a;

	do

	{

		 printf("*****MAIN MENU*****\n");

		 printf("1--PUSH a element to Stack\n");

		 printf("2-- Display a Stack\n");

		 //printf("3--Insert element at beginning\n");

		 printf("3-- POP an  element from Stack\n");

		 /*printf("5--Delete Last element\n");

		 printf("6-- Insert an element at End of list\n");

		 printf("7--Insert an element at nth position\n");

		 printf("8--Delete an element from nth position\n");

		 //printf("9--")*/

		 printf("******Choose your option*******\n");

		scanf("%d",&ch);

		printf("------------------------------------\n");

		     switch (ch)

			 {

			 	case 1:

			 	 	  printf("enter number to add\n");

			 	 	   scanf("%d",&k);

			 	 	   push(k);

			 	 	break;

			 	 	

			    case 2:

			   	 display();

			   	   break;

			   	   

			   	/*case 3:

			   		printf("Enter element to be add \n");

			   		scanf("%d",&k);

			   		insert_beg(k);

			   		break;*/

			   		

			   	case 3:

			   		pop();

			   		break;

			   		

			   	/*case 5:

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

					   break;*/

			   	   

			    default :

			 	 printf("wrong entry ");

			 }

			 printf("\nEnter non zero to continue\n");

			 scanf("%d",&ch);

	}while(ch!=0);

	return 0;

}
