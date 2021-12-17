#include<stdio.h>
void main()

{ 
    int a,b,c;
	printf("Enter First Number=");
	scanf("%d",&a);
	printf("Enter Second Number=");
	scanf("%d",&b);
	printf("Enter Third Number=");
	scanf("%d",&c);
	if(a>b)
		{ 
			if(a>c)
			   {printf("%d is largest",a);
		        }
		    else
		    {
		    	printf("%d is largest",c);
		    }    


		}
	else
	    {  
	     	if(b>c)
			   {printf("%d is largest",b);
		        }
		    else
		    {
		    	printf("%d is largest",c);
		    }  


	    }
}
