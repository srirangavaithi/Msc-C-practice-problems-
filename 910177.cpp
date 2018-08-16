#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b,r;
	printf("enter the 2 no.s to find their gcd");
	scanf("%d%d",&a,&b);
	r=gcd(a,b);
	printf("enter the 2 no.s to find their gcd");
	scanf("the gcd of %d and %d is %d .\n");
	return 0;
}
int gcd (int a, int b)
{
	while(a!=b)
	{
		if(a>b)
		{return gcd(a-b,b);
		}
		else
		{
			return gcd(a,b-a);
		}
	}
}
