#include<stdio.h>
//#include<string.h>
int main()
{
	char i,str[1001];
	printf("Enter a sentence:");
	//gets(str);
	scanf("%[^\n]s",str);
	printf("words in the sentence are:\n");
	for(i=0;str[i]!='\0';i++);
	{
		if(str[i]==' ')
		printf("\n");
		else
		printf("%c",str[i]);
	}
}
