#include<stdio.h>
int staticcounter()
{
	static int c=0;
	c++;
	return c;
}
int main()
{
	printf("%d",staticcounter());
	printf("%d",staticcounter());
	return 0;
}
