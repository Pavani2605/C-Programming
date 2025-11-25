 #include<stdio.h>
 void fibo(int);
 int main()
 {
 	int n;
 	printf("enter size");
 	scanf("%d",&n);
 	fibo(n);
 	return 0;
 }
 void fibo(int n)
 {
 	int f=0,s=1,t;
 	printf("%d %d",f,s);
 	t=f+s;
 	while(t<=n)
 	{
 		printf("%d",t);
 		f=s;
 		s=t;
 		t=f+s;
	 }
 }

