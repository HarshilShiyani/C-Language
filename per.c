#include<stdio.h>
void main()
//  
{ 
    int m,p,c,e,com,per;
	printf("Enter maths's Mark out of 100=");
	scanf("%d",&m);
	printf("Enter physic's Mark out of 100=");
	scanf("%d",&p);
	printf("Enter chemistry Mark out of 100=");
	scanf("%d",&c);
	printf("Enter english Mark out of 100=");
	scanf("%d",&e);
	printf("Enter computer Mark out of 100=");
	scanf("%d",&com);
	per=(m+p+c+e+com)*(100)/500;
	if(per<35)
		{ 
		 printf("You are fail");
		}
	else if(35<per&&45>per)
		    {	
		    	printf("You are pass");
		     }
	else if(45<per&&60>per)
		{	
		  printf("You are pass in second class");
		}
	else if(60<per&&70>per)
		{	
		  printf("You are pass in first class");
		} 
	else
		{	
		  printf("You are pass in Destination class");
		} 		 
	      


	    }
