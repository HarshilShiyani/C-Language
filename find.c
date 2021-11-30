#include<stdio.h>
int main()
{ 
	char ch;
	printf("Enter any character=");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{	
	printf("You Enter small character");
    }
    else if(ch>='A'&&ch<='z')
	{	
	printf("You Enter capital character");
    }
    else if(ch>='0'&&ch<='9')
	{	
	printf("You Enter Number");
    }
    else

	{	
	printf("You Enter Special character");
    }

}