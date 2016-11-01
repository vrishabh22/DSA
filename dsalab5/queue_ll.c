#include <stdio.h>
#include <stdlib.h>

struct queue
{
	 int val;
	 struct queue* link;
};

struct queue* front;
struct queue* rear;

void push(int s)
{
	
	struct queue* temp=(struct queue*)malloc(sizeof(struct queue));
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

void display()
{
	int i=0,a[10],count=-1;
	 if(front==NULL)
	  {
	  	 printf("queue is empty\n");
	  	  return;
	  }
	  else
	  {
	  	 struct queue* temp= front;
	  	 while(temp!=NULL)
	  	  {
	  	  	 //printf("\t%d\n ",temp->val);
	  	  	 a[i]=temp->val;
	  	  	 i++;
	  	  	 temp=temp->link;
	  	  	 count++;
			}
			printf("Queue is : \n");
			for(i=count;i>=0;i--)
			{
			printf("\t%d",a[i]);
			printf("\n");}
			return;
	  }
}

void pop()
{
	
	struct queue* temp;
	temp=front;
	front=front->link;
	temp->link=NULL;
	
	return;
}

int frontelement()
{
    if ((front != NULL) && (rear != NULL))
	printf(" First Element in Queue is %d\n",front->val);
        return;
}
 
/* Display if queue is empty or not */
void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}

int main()
{
	 front=NULL;
	 rear=NULL;
	 
	 int ch,k,a;
	do
	{	int e;
		 printf("*************MAIN MENU*************\n");
		 printf("1--PUSH a element to queue\n");
		 printf("2-- Display a queue\n");
		 printf("3-- POP an  element from queue\n");
		 printf("4--Print first element of Queue\n");
		 printf("5--Display if queue is empty or not\n");
		 printf("********Choose your option*********\n");
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
			   	   
			   	
			case 3:
			  pop();
			  break;
			
			case 4:
           		 e = frontelement();
           		
           		 	break;
        		case 5:
            			empty();
            			break;
			   		
			   	
			    default :
			 	 printf("wrong entry ");
			 }
			 printf("\nEnter non zero to continue\n");
			 scanf("%d",&ch);
	}while(ch!=0);
	return 0;
}



