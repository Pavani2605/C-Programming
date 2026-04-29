#include<stdio.h>
#include<string.h>
struct student
	{
		int m1,m2,m3;
		char name[10];
		float total,average;
	};
	int main()
	{
		int n,i;
		printf( "enter the number of students:");
		scanf("%d",&n);
		struct student s[n];
		for(i=0;i<n;i++)
		{
			printf("enter name,3 subject marks of student %d\n",i+1);
			scanf("%s%d%d%d",s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
		}
		for(i=0;i<n;i++)
		{
			s[i].total=s[i].m1+s[i].m2+s[i].m3;
			s[i].average=s[i].total/3.0;
			printf("total and average marks of student%d=%.2f,%.2f\n",i+1,s[i].total, s[i].average);
		}
		return 0;
}
