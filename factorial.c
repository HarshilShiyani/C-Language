#include<stdio.h>
	void main()
		{
		int n,i,ans=1;
        printf("n!\n");
		printf("Enter n:");
		scanf("%d",&n);
		i=1;
		while(i<=n)
		{  
			ans=ans*i;
			i++;
			
		}
		printf("Ans is=%d\n",ans);	
			
		}