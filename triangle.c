 
 #include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter length 1=");
	scanf("%d",&a);
	printf("Enter length 2=");
	scanf("%d",&b);
	printf("Enter length 3=");
	scanf("%d",&c);
	if(a==b&&b==c)
	{
		printf("Your Triangle is equaliter");
	}
	else if(a==b||b==c||a==c)
	{
		printf("Your Triangle is isoscale");
	}
	else if((a*a+b*b)==(c*c)||(a*a+c*c)==(b*b)||(b*b+c*c)==(a*a))
	{
		printf("Your Triangle is right angle Triangle  ");
	}	
	else
		{
		printf("Your Triangle is scalane  ");
	}
}