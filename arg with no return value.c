void add(int x,int);
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the 2 nums:");
	scanf("%d%d",&a,&b);
	add(a,b);
	return 0;
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("sum is:%d",c);
}
