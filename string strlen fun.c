//length of string without using strlen
/*#include<stdio.h>
#include<string.h>
int main()
{
	int length=0,i;
	char s1[50];
	printf("\n enter a string");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		length++;
	}
	printf("\n length of the string is %d",length);
	return 0;
}*/
// finding length and reverse of a string using strlen function
#include<stdio.h>
#include<string.h>
int main()
{
    int length,i;
    char s1[50];
    printf("\n enter a string");
    gets(s1);
    length=strlen(s1);
    printf("\n length of the string is:%d",length);
    for (i=length;i>=0;i--)
    {
    	printf("%c",s1[i]);
	}
	return 0;
}
