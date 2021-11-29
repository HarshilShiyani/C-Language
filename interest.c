#include<stdio.h>
void main()

{ 
	float p,r,n,interest;
	printf("Enter Value of P(in rupees)=");
	scanf("%f",&p);
	printf("Enter Value of R(in percentage)=");
	scanf("%f",&r);
	printf("Enter Value of N(in year)=");
	scanf("%f",&n);
	interest=(p*r*n)/100;
	printf("adition=%f",interest);
}
        