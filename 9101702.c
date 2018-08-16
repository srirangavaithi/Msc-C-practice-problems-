#include<stdio.h>
int Add(int a ,int b)
{
	int s =a+b;
	return s;
}
int Div(int a,int b)
{
	int s=a/b;
	return s;
}
int Mul(int a, int b)
{
	int s=a*b;
	return s;

}

int main()
{
	int a,b,r;
	printf("enter the value of a,b");
	scanf("%d%d",&a,&b);
	r=Add(Mul(a,b),(Div(a,Mul(a,b)))-Div(b,Add(a,b))-Div(a,b));
	printf("the val of expn %d",r);
	return 0; 
}
