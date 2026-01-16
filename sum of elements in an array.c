#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter the size:");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements:\n",n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		printf("sum of array elements=%d\n",sum);
	}
}
