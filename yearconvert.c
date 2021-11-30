#include<stdio.h>
void main()
{
 	int y,d,w,y1,d1;
	printf("Enter days=");
	scanf("%d",&d1);
	y=d1/365;
	y1=d1%365;
	w=y1/7;
	d=y1%7;
	printf("%dyear%dweek%ddays",y,w,d);
	
}