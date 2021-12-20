#include<stdio.h>
void main()
{ int n,l;
   printf("Enter number=");
   scanf("%d",&n);
 
   while(n>0)
   {
    l=n%10;
    n=n/10;
    printf("%d",l);
 
    }
    
 
}
