#include<stdio.h>
void main()

{ int a,b,c;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	printf("substraction choose 1\n");
	printf("multiflication choose 2\n");
	printf("division choose 3\n");
	scanf("%d",&c);
	if(c==1)
	{
		printf("Answer is=%d",a+b);	
	}
	if(c==2)
	{
		printf("Answer is=%d",a*b);	
	}
	if(c==3)
	{
		printf("Answer is=%d",a/b);	
	}
}