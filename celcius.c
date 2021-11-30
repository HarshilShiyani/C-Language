#include<stdio.h>
void main()
{
	float c,F;
	printf("Plz Enter temp in fernhit=");
	scanf("%f",&F);
	c=((F-32.0)*(5.0/9.0));
	printf("temp in celcius=%f",c);
}