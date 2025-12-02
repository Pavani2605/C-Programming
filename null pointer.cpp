#include<stdio.h>
int main()
{
	int a=12;
	int*ptr=NULL;
	if(ptr==NULL)
	ptr=&a;
	printf("value of ptr=%d",*ptr);
	return 0;
}
