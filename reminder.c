#include<stdio.h>
void main()
{ 
	int num,div,rem,ans;
	printf("Enter numinator=");
	scanf("%d",&num);
	printf("Enter divider=");
	scanf("%d",&div);
	rem=num%div;
	ans=num/div;
	printf("reminder=%d\n",rem);
	printf("answer=%d\n",ans);
}