#include<stdio.h>
	void main()
		{
			int n,i,sum=0;

		printf("Enter n:");
		scanf("%d",&n);
		i=1;
		while(i<=n)
		{ 
		
			if(i%2==0)
			{
				sum=sum-i;
			}
			else
			{
				sum=sum+i;
			}	
			i++;

		}
		printf("Total is=%d\n",sum);	
			
		}