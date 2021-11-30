  #include<stdio.h>
#include<math.h>
void main()
{
 	float a,b,c,d;
	printf("Enter salary=");
	scanf("%f",&a);

	if(a>=10000)
	{
		if(a<20000)
		{
			b=(a*20)/100;
			c=(a*80)/100;
			d=a+b+c;
			printf("Your gross salary is=%f",d);

		}
	}
	if(a>=20000)
	{
		if(a<30000)
		{
			b=(a*25)/100;
			c=(a*90)/100;
			d=a+b+c;
			printf("Your gross salary is=%f",d);

		}
	}
	if(a>=30000)
	{
		    b=(a*30)/100;
			c=(a*95)/100;
			d=a+b+c;
			printf("Your gross salary is=%f",d);

	}
	else
	{
		printf("Enter salary more than 10,000");
	}
	

	                                                                                         
	
}