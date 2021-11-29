// Find Largest number of 3 numbers
#include<stdio.h>
void main()

{ 
	int a,b,c;
	printf("Enter Value of a=");
	scanf("%d",&a);
	printf("Enter Value of b=");
	scanf("%d",&b);
	printf("Enter Value of c=");
	scanf("%d",&c);
	(a>b)?((a>c)?(printf("%d is largest.",a)):(printf("%d is largest.",c)))
	:((b>c)?(printf("%d is largest.",b)):(printf("%d is largest.",c)));
 }       


        