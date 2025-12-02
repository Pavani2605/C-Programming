#include<stdio.h>
int main()
{
	int x=1145;
	char A='x';
	void*ptr;
	ptr=&x;
	printf("value of ptr=%d",*(int*)ptr);
	ptr=&A;
	printf("\n value of ptr=%c",*(char*)ptr);
	return 0;
}
