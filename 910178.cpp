#include<stdio.h>
int addno(int n);
int main()
{
	int num;
	printf("enter a positive int :");
	scanf("%d",&num);
	printf("sum=%d",addno(num));
	return 0;
}
int addno(int n)
{
	int(n!=0)
	return (n + addno(n-1));
	else
	return n;
	
}
