#include<stdio.h>
void main()
{
 	int a,b;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("new value of a=%d\n",a);
	printf("new value of b=%d\n",b);
}