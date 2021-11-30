#include<stdio.h>
int main()
{ 
	int a,b;
	printf("Enter any Number=");
	scanf("%d",&a);
	b=a%10;
	if(b%2==0)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is odd");
	}
	

}