#include<stdio.h>
float intr(int,int,int);
int main()
{ 
	int p,r,n;
	printf("Enter Amount=");
	scanf("%d",&p);
	printf("Enter rate in persentage=");
	scanf("%d",&r);
	printf("Enter year=");
	scanf("%d",&n);

	float inte;
	inte=intr(p,r,n);
	printf("%f",inte);
}
float intr(int p,int r,int n)
{
	return (p*r*n)/100;
}