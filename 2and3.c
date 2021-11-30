//Days of given month
#include<stdio.h>
void main()

{ 
	int a,x,n;
	printf("Enter a first number=");
	scanf("%d",&a);
	printf("Enter a last number=");
	scanf("%d",&n);
	x=a;
	while(x<=n)
	{ 
		if(x%2==0&&x%3!=0)
		{
			printf("%d\n",x);
    	}
		x++;
	
	}
}	