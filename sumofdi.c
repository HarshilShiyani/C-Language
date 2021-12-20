#include<stdio.h>
void main()
{ 
	int n,l,sum=0;
	printf("Enter any Number=");
	scanf("%d",&n);
	
	while(n>0)
	{
		l=n%10;
		n=n/10;
		sum=sum+l;
	}	
	printf("%d",sum);
}	
			
			
											    	
		
	
