#include<stdio.h>
void main()
{ int n,l,rev=0,mm;
   printf("Enter number=");
   scanf("%d",&n);
     mm=n;
   while(n>0)
   {
    l=n%10;
    n=n/10;
    rev=rev*10+l;
    }
    printf("reverse no is%d\n",rev);
    
 
}
