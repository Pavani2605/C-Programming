#include<stdio.h>
struct address
{
	char street[10];
	char city[10];
	long int pcode;
};
struct student
{
	int rno;
	char name[10];
	float per;
	struct address a;
};
int main()
{
	struct student s={101,"pavani",99.80,{"aditya","brm",534202}};
	printf("\n%d %s %f %s %s %ld",s.rno,s.name,s.per,s.a.street,s.a.city,s.a.pcode);
	return 0;
}