#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,z,r,t,p;
	printf("enter the coordinates");
	scanf("%f%f%f",&x,&y,&z);
	r=sqrt(x*x+y*y+z*z);
	t=atan(y/x);
	p=atan(z/x);
	printf("the coordinates in polar coodinates are %f%f%f",r,t,p);
	return 0;
}
