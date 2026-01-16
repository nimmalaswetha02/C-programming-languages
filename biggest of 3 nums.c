/*#include<stdio.h>
int main()
{
    int a,b,c,max;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("largest among 3 numbers is:%d",max);
	return 0;
	
}*/
#include<stdio.h>
int main()
{
	int num,i,a[50];
	int sum=0;
	printf("enter the nums:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		sum+=a[i];
		printf("sum of array elements is:%d",a[i]);
	}
}
