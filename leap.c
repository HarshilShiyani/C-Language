#include<stdio.h>
int main()
{
	int y;
	printf("Enter any Year=");
	scanf("%d",&y);
	if(y%4==0 && y%100!=0)
	{
			
		printf("leap year.");
	    
	}
	else if(y%400==0)
	{

		printf("leap year.");
	    
	}
	else
	{
	  printf(" Not a leap year.");	
	}
}