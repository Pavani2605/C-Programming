#include<stdio.h>
int main()
{
	int a=10,*p;
	p=&a;
	printf("value of a=%d",a);
	printf("\naddress of a=%u",p);
	printf("\nvalue of p=%d",&p);
	printf("\naddress of p=%u",*p);
	return 0;
}
