#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,m,n;
	printf("enter value of a=");
	scanf("%f",&a);
	printf("enter value of b=");
	scanf("%f",&b);
	printf("enter value of c=");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	if(d==0)
	{
		r1=r2=(-b)/(2*a);
		printf("r1=%f",r1);
		printf("r2=%f",r2);
	}
	if(d>0)
	{
		r1=((-b)+(sqrt(d)))/(2*a);
		r2=((-b)-(sqrt(d)))/(2*a);
		printf("r1=%f",r1);
		printf("r2=%f",r2);
	}
	if(d<0)
	{
		m=(-b)/(2*a);
		n=(sqrt(-d))/(2*a);
		printf("r1=%f+i%f",m,n);
		ptintf("r2=%f-i%f",m,n);
	}
}