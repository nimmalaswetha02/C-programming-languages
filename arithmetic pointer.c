#include<stdio.h> 
int main ()
{
int a = 10; int b=20;
int *p1,*p2;
p1 = &a;	
p2=&b ; 
printf("\np1is%u",p1);
printf("\np1+1 is%u",p1+1);		//p1+n= p1+n*size of datatype printf("\np1+1 is%u",p1-1);	//p1-n= p1-n*size of datatype printf("\np2 is %u",p2);
printf("\np1-p2 is is %u",p1-p2);//p1-p2=(Subtraction of two addresses)/size of data type
}
