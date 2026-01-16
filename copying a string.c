//copying string without using strcpy function
#include<stdio.h>
int main()
{
	int length,i=0;
	char s1[50],s2[50];
	printf("\n enter a string");
	gets(s1);
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	printf("\n copied string is: %s",s2);
	return 0;
}
