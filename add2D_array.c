#include<stdio.h>
int main()
{ 
	int n,i,j;
	printf("Enter Index of Matrix=");
	scanf("%d",&n);
	int arr[n][n],sum[n][n];
	int arr2[n][n];
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
           printf("%d\t",arr[i][j]);
           
		}
		printf("\n");	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
           printf("Enter Array");
           scanf("%d",&arr2[i][j]);
		}	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
           printf("%d\t",arr2[i][j]);
           
		}
		printf("\n");	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
           
           sum[i][j]=arr[i][j]+arr2[i][j];
           printf("New array\n");
           printf("%d\t",sum[i][j]);
		}
		printf("\n");	
	}

	

}