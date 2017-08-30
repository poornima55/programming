#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[10][100];
	char temp[100];
	printf("enter the five strings to be sorted\n:");
	
		for(j=0;j<5;j++)
		scanf("%s",str[j]);

	printf("now sortinG the stringsin alphabetical order\n");

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}

	printf("sorted strings are\n");
	
		for(j=0;j<5;j++)
		{
			printf("%s\n",str[j]);
		}
}
