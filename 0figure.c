#include<stdio.h>
void main()
{ 
   int n,i,j;
   printf("Enter number=");
   scanf("%d",&n);
  
   for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
        {
         if(i==1||i==n||j==2||j==n)
            {
              printf("*");
            }
          if(j!=1&&j!=n&&i!=1&&i!=n)
            {
                printf(" ");
            }
           
        
        
        }
    
      printf("\n");   
   }
 }
   
