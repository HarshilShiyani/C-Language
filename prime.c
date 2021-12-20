#include<stdio.h>
void main()
{ 
	int n,i,flag=0;
	printf("Enter any Number=");
	scanf("%d",&n);
	i=2;
	while(i<=(n-1))
	{
		if(n%i==0)
		{

		flag++;	
		}	



	i++;	
	}
	if(flag==0)	
	{ printf("prime");
		}
	else
	{
		printf("Not prime");
	}	

}	
			
			
											    	
		
	
