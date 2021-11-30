#include<stdio.h>
#include<math.h>
void main()
{
 	float a,b,c,d;
 	printf("equation is a*x*x + b*x+ c");
	printf("Enter value of a=");
	scanf("%f",&a);
	printf("Enter value of b=");
	scanf("%f",&b);
	printf("Enter value of b=");
	scanf("%f",&c);
	d=(b*b)-4*a*c
	if(d==0)
	{
		float r;
		r=(-b)/2*a;
		printf("Root is %d",&r);

	}
	if(d>0)
	{
		float r1,r2;
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("Root 1 is f",&r1);
		printf("Root 2 is %f",&r2);
	}
	if(d<0)
	{
		float r1,r2,r3f
		r1=(-b)/2*a;
		r2=sqrt(d)/2*a;
		r3=sqrt(d)/2*a;
		printf("Root 1  is -%f"+i,&r1);
		printf("Root 2 is %f"+i,&r1);

	

	}

	
	
}