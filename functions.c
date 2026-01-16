#include<stdio.h>
/*main(){
int result1=	myFunction(25,10);
int result2=	myFunction(40,10);
int result3=	myFunction(15,10);

printf("%d\n%d\n%d",result1,result2,result3);
	
}
int myFunction(int x,int y){
	int sum = x+y;
	return sum;
}*/
main(){
	 int numbers[5] = {20,15,30,45,50};
	myFunction(numbers);
	
}
void myFunction(int numbers[5]){
	int i;
	for(i=0;i<5;i++){
		printf("%d\n",numbers[i]);
	}
}

