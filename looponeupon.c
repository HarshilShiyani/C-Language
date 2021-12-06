#include<stdio.h>
	void main()
		{
			float n,i,sum=0;

		printf("Enter n:");
		scanf("%f",&n);
		i=1.00;
		while(i<=n)
		{  
			sum=sum+(1/i);
			i++;
		}
		printf("Total is=%f\n",sum);	
			
		}