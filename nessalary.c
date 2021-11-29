//Find the gross salary
#include<stdio.h>
void main()

{ int a,da,hra;
	printf("Enter your salary=");
	scanf("%d",&a);

	if(a<10000)
	{ 	
		printf("your gross salary is less than 10,000");	
	}
	else if(a>=10000&&a<20000)
	{ 	                                            
		hra=(a*20)/100;
		da=(a*80)/100;
		printf("your gross salary is=%d\n",a+hra+da);
	}
	else if(a>=20000&&a<30000)
	{
		hra=(a*25)/100;
		da=(a*90)/100;
		printf("your gross salary is=%d\n",a+hra+da);
	}
	else
	{	
		hra=(a*30)/100;
		da=(a*95)/100;
		printf("your gross salary is=%d\n",a+hra+da);
	}	
}
