#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,n;
	printf("addition of two matrices:\n");
	//printf("\n");
	scanf("%d",&n);
	printf("input the size of the square matrix:");
	scanf("%d",&n);
	printf("input elements in the 1 matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("element[%d],[%d]:",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("element[%d],[%d]:",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	printf("the 1 matrix is:");
	for(i=0;i<n;i++)
	{
	printf("\n");
	for(j=0;j<n;j++)
	printf("%d\t",a[i][j]);
	}
	printf("the 2 matrix is:");
	for(i=0;i<n;i++)
	{
	printf("\n");
	for(j=0;j<n;j++)
	printf("%d\t",b[i][j]);
	}
	// calculate the sum of matrix
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	c[i][j]=a[i][j]+b[i][j];
	printf("\n addition of two matrix is:");
	for(i=0;i<n;i++)
	{
	printf("\n");
	for(j=0;j<n;j++)
	printf("%d\t",c[i][j]);
	}
	
}
