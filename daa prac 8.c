// floyd's
#include<stdio.h>
#define size 10

void main()
{
	int a[size][size];
	int i,j,n;
	void floyd(int[i][j],int);
	printf("Enter no. of vertices:");
	scanf("%d",&n);
	printf("Give the initial weighted graph weight matrix form (give 9999 in the place of infinity):\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf("Enter the value of a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("The input weight matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			if(a[i][j]==9999)
				printf("inft\t");
			else
				printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
		floyd(a,n);
		printf("\n The final matrix where we can find the shortest distance:\n");
		
		for(i=0;i<n;i++)
		{	
			for(j=0;j<n;j++)
				printf("%d\t",a[i][j]);
				printf("\n");
		}
	
}
void floyd(int a[size][size],int n)
{
	int k,i,j;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]>(a[i][k]+a[k][j]))
					a[i][j]=(a[i][k]+a[k][j]);
				
			}
		}
	}
}
