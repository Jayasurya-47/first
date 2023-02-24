#include<stdio.h>
#include<stdio.h>
void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void create();
int st1[100],st2[100];
int top1=1,top2=-1;
int count=0;
void main()	
{
int ch;
printf("\n1-enqueue element into queue");
printf("\n2-dequeue element ftom queue");
printf("\n3-display from queue");
	   printf("\n4-exit");
	   create();
	   while(1)
	   {
	   	printf("\n enter choice");
	   	scanf("%d",&ch);
	   	switch(ch)
		   {
		   	case 1:enqueue();
		   	     break;
  	        case 2:dequeue();
			     break; 
		   	case 3:display();
		   	     break;
		   	case 4:exit(0);
			default:printf("wrong choice");    
		   }
	   }	
} 
     /*fuction to create a queue*/
         void create()
{
		 	top1=top2=-1;
}
		/*fuction to push the elememt on to the stack*/
		   void push1(int data)
{
		   	st1[++top1]=data;
}
		  /*function to pop the element from the stack*/
		       int pop()
		       {
			   	return(st1[top1--]);
			   }
		/*function to push an elelment on to stack*/
		     void pudh2(int data)
			 {
			 	st2[++top2]=data;
			 }	   
		/*function to pop an element from the stack*/
		  int pop2()
		  {
		  	return(st2[top2--]); 
		  }	 
		 /*function to add an elements into the queue using stack*/
		   void enqueue()
		   {
		   	int data,i;
		   	printf("enter data into queue");
		   	scanf("%d",&data);
		   	push1(data);
		   	count++;
		   } 
		  /*function to add an element into the queue*/
		    void dequeue()
			{
				int i;
				for(i=0;i<=count;i++)
				{
					push2(pop1());
				}		
				pop2();
				count--;
				for(i=0;i<=count;i++)
				{
					push1(pop2());
				}	
			} 
			/*function to display the elelments in thestack*/
			  void display()
			  {
			  	int i;
			  	for(i=0;i<=top1;i++)
				  {
				  	printf("%d",st1[i]);
				  }
			  }
			   