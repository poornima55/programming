#include<stdio.h>
/*trying to print a pascal triangle*/

long int fact(int n)
{
	long int result =1;

	for(int c =1;c<=n;c++)
	{
		result = result*c;
	}
	return result;
}
int main()
{
	int n,i,j;
	long int f;
	printf("enter the number of lines\n");
	scanf("%d",&n);
	int space=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=space;j++)
		{
			printf(" ");
		}
		space--;
		for(j=0;j<=i;j++)
		{
			f = fact(i)/(fact(j)*fact(i-j));
			printf("%ld ",f);
		}
			printf("\n");
		
		
	}
	return 0;
}
