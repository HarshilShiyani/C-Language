#include<stdio.h>
int main()
{ 
	int n,i,j,neg=0,pos=0,zero=0;
	printf("Enter Index of Matrix=");
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
           printf("Enter Array");
           scanf("%d",&arr[i][j]);
		}	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
           if(arr[i][j]>0)
           {
           		pos++;
           }
           if(arr[i][j]<0)
           {
           		neg++;
           }
           if(arr[i][j]==0)
           {
           		zero++;
           }
		}
	}
		printf("Positive Number=%d\n",pos);
		printf(" Negative Number=%d\n",neg);
		printf("Zero=%d\n",zero);
					

	}
	

