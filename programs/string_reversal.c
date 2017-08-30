#include<stdio.h>

#include<string.h>
char* string_reversal(char *str)
{
	static char temp[100];
	int i=0;
	int len=strlen(str)-1;
	while(str[i]!='\0')
	{
		temp[i]=str[len-i];
		i++;
	}
	return temp;
}

int main()
{

	
	char str[100];
	char* str2;
	printf("enter a string\n");
	gets(str);
	str2 =  string_reversal(str);

	printf("the reversed string is: %s",str2);

	return 0;
}

