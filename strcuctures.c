#include <stdio.h>
#include <string.h>
	struct myStructure{
		int myNum;
		char myChar;
		char myLetter[];
		
	};
	main(){
		struct myStructure s1;
		
		s1.myNum = 15;
		s1.myChar = 's';
		strcpy(s1.myLetter,"swetha");
		printf("integer value : %d\n",s1.myNum);
		printf("char value : %c\n",s1.myChar);
		printf("myLetter :%s",s1.myLetter);
		
	}
	
	
	
	

