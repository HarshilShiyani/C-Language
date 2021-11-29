//switch
#include<stdio.h>
void main()

{ 
	int a,b;
	char ch;
	printf("choice is +,-,*,/\n");
	printf("Enter your choice=");
	scanf("%c",&ch);
	printf("Enter Value of a=");
	scanf("%d",&a);
	printf("Enter Value of b=");
	scanf("%d",&b);
	
	

	switch(ch)
	{
		case '+':
		printf("%d",a+b);
		break;
		case '-':
		printf("%d",a-b);
		break;
		case '/':
		printf("%d",a/b);
		break;
		case '*':
		printf("%d",a*b);
		break;
		default:
		printf("Your choice is +,-,*,/");

	}

}
        