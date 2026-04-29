#include<stdio.h>
#include<stdlib.h>
int queue[100],n,i,front=-1,rear=-1,x,ch;
void insert();
void delet();
void display();
int main()
{
	//clrscr()
	printf("enter QUEUE size:");
	scanf("%d",&n);
	printf(" QUEUE operations:1.insert 2.delete 3.display 4.exit");
	while(1)
	{
		printf("enter your choice");
		scanf("%d",ch);
		switch(ch);
		{
		 case 1: insert();
			break;
		 case 2: delete();
			break;
		 case 3: display();
			break;
		 case 4: printf("exit from queue:");
			exit(0);
		 default:printf("invalid choice");
		}
	}
	return o;
}
	void insert()
	{
		if(rear==n-1)
		{
			printf("QUEUE is full");
		}
		else
		{
			rear++;
			printf("enter QUEUE element");
			scanf("%d",&x);
			queue[rear]=x;
			printf("element inserted");
		}
	}
	void delete()
	{
		if(front==rear)
		{
			printf("queue is empty");
		}
		else
		{
			front++;
			printf("delete data element is=%d",queue[front]);
		}
	}
	void display()
	{
		if(front==rear)
		{
			printf("queue is empty");
		}
		else 
		{
			printf("queue elements are:\n");
			for(i=front;i<rear;i++)
			{
				printf("%d",queue[i]);
			}
		}
	}
}
	
	