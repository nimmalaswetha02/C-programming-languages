#include<stdio.h>
#include<string.h>
int main()
{
int length=0,i;
	char str1[20];
	printf("\n enter a string: ");
	gets(str1);
	length=strlen(str1);
	printf("\n length of the string is %d",length);
	for(i=length;i>=0;i--)
	{
		printf("%c",str1[i]);
	}
		return 0;
}
	
