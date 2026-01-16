//display the max of three numbers
#include<stdio.h>
int main()
{
/*	int a,b,c,max;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	max = a>b?(a>c?a:c):(b>c?b:c);
	printf("Largest among the three numbers is %d",max);
	return 0;*/
	
// To print 5 subs and their total,avg
   int Eng,Mat,Science,Psychology,History,Total;
   float average;
   printf("enter the marks of Eng,Mat,Science,Psychology and History:\n");
   scanf("%d%d%d%d%d",&Eng,&Mat,&Science,&Psychology,&History);
   Total = Eng + Mat + Science + Psychology + History;
   average = Total/5.0;
   printf("total marks pf the student:%d\n",Total);
   printf("average marks of the student:%.2f\n",average);
   return 0;
	
}
