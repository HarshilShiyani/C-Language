#include<stdio.h>
	void main()
		{
			int n,i,sum=0;

		printf("Enter n:");
		scanf("%d",&n);
		i=1;
		while(i<=n)
		{  
			sum=sum+(i*i);
			i++;
		}
		printf("Total is=%d\n",sum);	
			
		}