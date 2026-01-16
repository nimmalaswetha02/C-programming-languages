#include<stdio.h>
int main()
{
	int i;
	int marks[6];
	printf("enter array elements");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=5;i++)
	{
		printf("%d\n",marks[i]);
	}
	return 0;
}
