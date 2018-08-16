#include<stdio.h>
int convert(int);
int main()
{
	int dec ,bin;
	printf("enter a decimal no.");
	scanf("%d",&dec);
	bin=convert(dec);
	printf("the binary equivalent od %d is %d \n",dec,bin);
	return 0;
}

int convert(int dec)
{
	if(dec==0)
	{
		return 0;
		
	}
	else 
	{
		return ( dec%2+10*convert(dec/2));
	}
}
