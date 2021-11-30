#include<stdio.h>
void main()
{
	float u,t,a,d;
	printf("Plz Enter u=");
	scanf("%f",&u);
	printf("Plz Enter t=");
	scanf("%f",&t);
	printf("Plz Enter a=");
	scanf("%f",&a);
	d=(u*t)+((a*t)*(a*t));
	printf("traveled distance=%f",d);
}