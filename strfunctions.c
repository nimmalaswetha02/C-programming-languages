#include <stdio.h>
#include <string.h>
main(){
	/*char text [] = "alphabets";
	printf("%zu",strlen(text));*/
/*	char str1 []="hello  ";
	char str2[]="world!";
	strcat(str1,str2);
	printf("%s",str1);*/
/*	char str3[20]="swetha";
	char str4[20];
	strcpy(str4,str3);
	printf("%s",str4);*/
/*	char str5[]="hello";
	char str6[]="hello";
	char str7[]="hi";
printf("%d\n",strcmp(str5,str6));
prinntf("%d\n",strcmp(str5,str7));*/
char str1[] = "Hello    ";
  char str2[] = "Hello";
  char str3[] = "Hi";

  // Compare str1 and str2, and print the result
  printf("%d\n", strcmp(str1, str2));
  
  // Compare str1 and str3, and print the result
  printf("%d\n", strcmp(str1, str3));
  
  
    // Create an int and a char variable
  int myNum;
  char myChar;

  // Ask the user to type a number AND a character
  printf("Type a number AND a character and press enter: \n");

  // Get and save the number AND character the user types
  scanf("%d %c", &myNum, &myChar);

  // Print the number
  printf("Your number is: %d\n", myNum);

  // Print the character
  printf("Your character is: %c\n", myChar);
  
  

}
