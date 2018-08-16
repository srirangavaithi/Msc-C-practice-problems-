#include<stdio.h>
int main()
{
	int i,n,c=0,v=2,f=1,t=0;
	printf("enter the value for n :");
	scanf("%d",&n);
	while(c<n)
	{
		for(i=2;i<=v-1;i++)
		{
			if(v%i==0)
			{
				f=0;
				break;
			
			}
			if(f)
			{
				t=t+v;
				c++;
			}
			v++;
			f=1;
		}
	}
	printf("sum of 1st %d p no.s is %d\n",n,t);
	return 0;
}
