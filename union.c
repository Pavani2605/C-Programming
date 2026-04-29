#include<stdio.h>
union student
{
	int rno;
	char name[10];
	float per;
};
int main()
{
	union student s={101,"pavani",99.90};
	printf("%d %s %f",s.rno,s.name,s.per);
	return 0;
}