#include<stdio.h>
/*trying to print diamond pattern by coding*/

int main()
{
	int i,j,k;
	int n;
	printf("enter the number of lines\n");
	scanf("%d",&n);
	int line=1;
	for(i=n/2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<line;k++)
		{
			printf("*");
		}

		
		printf("\n");
		line =line+2;

	}
	
	line = n;
	for(i=0;i<=n/2;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<line;k++)
		{
			printf("*");
		}

		
		printf("\n");
		line =line-2;

	}





}

	

