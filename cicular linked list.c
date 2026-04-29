#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node*link;
};
struct node*start=null,*temp,*t1,*t2,*last=null;
void first insert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\tenter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=null;
	if(start==null)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->link=start;
		start=temp;
		last->link=temp;
	}
}
void last insert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\tenter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=null;
	if(start==null)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->link=last->link;
		last->link=temp;
		last=temp;
	}
}
void middle insert()
{
	int e,pos,i=1;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n\tenter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=null;
	printf("\n\t enter the position to insert");
	scanf("%d",&e);
	if(start==null)
	{
		start=temp;
	}
	else
	{
		printf("\n inside of middle insert fun");
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		temp->link=t2->link;
		t2->link=temp;
	}
}
void first delete()
{
	if(start==null)
	{
		print("\n\t linked list is empty no nodes to perform delete operation");
	}
	else
	{
		start=start->link;
		last->link=start;
		printf("\n\t first node is deleted successufully")
	}
}
void last delete()
{
	if(start==null)
	{
		printf("\n\t no nodes in linked list to delete");
	}
	else 
	{
		t1=start;
		while(t->link!=last)
		{
			t2=t1;
			t1=t1->link;
		}
		t1->link=start;
		last=t1;
	}
}
void middle delete()
{
	int pos,i=1;
	print("\n enter the position to delete to node");
	scanf("%d",&pos);
	if(start==null)
	{
		printf("\n\t element to delete linked list is empty");
	}
	else
	{
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t2=t1->link;
			i++;
		}
		t2->link=t1->link
	}
}
void disp()
{
	if(start==null)
	{
		printf("\n no elements in linked list...");
	}
	else
	{
		printf("\n\t linked list elements are...");
		t1=start;
		while(t1->link!=start)
		{
			printf("%d",t1->data);
			t1=t->link;
			printf("%d",t1->data);
		}
	}
}
	int main()
	{
		int ch;
		while(1)
		{
			printf("\n\t\t\t......linked list operation....");
			printf("\n\n\t\t1.first insert");
			printf("\n\n\t\t2.last insert");
			printf("\n\n\t\t3.middle insert");
			printf("\n\n\t\t4.first delete");
			printf("\n\n\t\t5.last delete");
			printf("\n\n\t\t6.middle delete");
			printf("\n\n\t\t7.dis()");
			printf("\n\n\n\n\t8.exit");
			printf("\n\n\t enter your choice.....");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:first insert(); break;
				case 2:last insert(); break;
				case 3:middle insert(); break;
				case 4:first delete(); break;
				case 5:last delete(); break;
				case 6:middle delete(); break;
				case 7:disp(); break; 
				case 8:exit(0);
			}
		}
		return 0;
	}
