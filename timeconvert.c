#include<stdio.h>
void main()
{
 	int h,m,s,h1,m1;
	printf("Enter second=");
	scanf("%d",&s);
	h=s/3600;
	h1=s%3600;
	m=h1/60;
	m1=h1%60;

	printf("%d:%d:%d",h,m,m1);
	
}