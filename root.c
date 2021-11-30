  #include<stdio.h>
#include<math.h>
void main()
{
 	float a,b,c,d,q,r1,r2,r;
 	printf("equation is a*x*x + b*x+ c");
	printf("Enter value of a=");
	scanf("%f",&a);
	printf("Enter value of b=");
	scanf("%f",&b);
	printf("Enter value of c=");
	scanf("%f",&c);
	d=(b*b)-4*a*c;
	q=sqrt(-d);
	if(d==0)
	{
		
		r=(-b)/(2*a);
		printf("Root is %f",r);

	}
	if(d>0)
	{
		
		r1=(-b+q)/(2*a);
		r2=(-b-q)/(2*a);
		printf("Root 1 is %f",r1);
		printf("Root 2 is %f",r2);
	}
	if(d<0)
	{

		r1=-b/(2*a);
		r2=q/(2*a);
		printf("Root 1  is  %f+i%f",r1,r2);
		printf("Root 2  is  %f-i%f",r1,r2);

	

	}

	
	
}