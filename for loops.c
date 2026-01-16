// sum of the digits of a 5-digt num
#include<stdio.h>
int main()
{
	/*int num,i,sum=0;
	printf("Enter a +ve digit number:");
	scanf("%d",&num);
	//int sum = 0;
	while(num!=0)
	{
		sum+=num%10;
		num=num/10;
	}
	printf("Digit sum:%d",sum);*/
	
/* sum of first n natural numbers
	for(i = 1; i <= num; i++){
		sum=sum+i;
	}
	printf("sum of first %d natural numbers=%d\n",num,sum);*/
	
//given number is prime or not
   int n,i,factor_count=0;
   printf("Enter a number:");
   scanf ("%d",&n);
   for(i=1;i<=n;i++)
   {
   	if(n%i==0)factor_count++;
   }
   if (factor_count==2)
   printf ("%d is a prime",n);
   else {
   printf("%d is not a prime",n);
   }
	return 0;
}
