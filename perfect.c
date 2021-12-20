#include<stdio.h>
void main()
{ 
	int n,i,sum=0;
	printf("Enter any Number=");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			sum=sum+i;	
			
	    }
	    i++;
	}
	if(n==sum)
	{
				printf("Number is perfect");
			}
	else
	{
				printf("Number not perfect");
			}	
	
}