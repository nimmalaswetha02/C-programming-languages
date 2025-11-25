//simulate a calculator using switch case
#include<stdio.h>
int main()
{
/*	char op;
	double first,second;
	printf("Enter an opertaor(+,-,*,/):");
	scanf("%c",&op);
	printf ("enter two operands:");
	scanf("%lf%lf",&first,&second);
	switch (op){
		case'+':
			printf("%.lf+%.lf =%.lf",first,second,first+second);
			break;
	   case'-':
			printf("%.lf-%.lf =%.lf",first,second,first-second);
			break;
		case'*':
			printf("%.lf*%.lf =%.lf",first,second,first*second);
			break;
		case'/':
			printf("%.lf/%.lf =%.lf",first,second,first/second);
			break;
		default:
			printf("Error! operator is not correct");
		}*/
	// given year is a leap year or not
	   int y;
	   printf("enter the year to check:");
	   scanf("%d",&y);
	   if (((y%4==0)&&(y%100!=0))||(y%400==0))
	     printf ("It is aleap year");
	     else
	     printf("it is not a leap year");
		return 0;
	}
	
	

