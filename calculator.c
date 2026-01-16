//calculator program using switch case
#include<stdio.h>
int main()
{
	char operator;
	int num1,num2;
	printf("enter the expression(ex:2+3):");
	scanf("%d%c%d",&num1,&operator,&num2);
	switch(operator){
		case'+':
		printf("result:%d\n",num1+num2);
		break;
		case'-':
		printf("result:%d\n",num1-num2);
		break;
        case'*':
		printf("result:%d\n",num1*num2);
		break;
        case'/':
		printf("result:%d\n",num1/num2);
		break;
		if(num2 !=0)
		printf("Result:%.2f\n",(float)num1/num2);
		break;
  default:
  printf("invalid operator\n");
	}
	return 0;
}
