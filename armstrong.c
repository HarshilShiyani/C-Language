#include<stdio.h>
void main()
{ 
	int n,l,sum=0,z;
	printf("Enter any Number=");
	scanf("%d",&n);
	z=n;
	while(n>0)
	{
		l=n%10;
		n=n/10;
		sum=sum+(l*l*l);
	}
	if(z==sum)
	{
		printf("armstrong Number");
	}
	else
	{
		printf("not armstrong Number");
	}	

}	
			
			
											    	
		
	
