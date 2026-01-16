#include<stdio.h>
int main()
{
	int a;
	float b;
	char ch;
	printf ("enter a integer\n");
	scanf("%d",&a);
	printf("enter a float number\n");
	scanf("%f",&b);
	printf("enter a character");
	scanf("%ch",&ch);
	printf("%d\n%f\n%ch\n%s",a,b,ch);
	return 0;
}
