#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the 2 nummbers\n");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swapping done: a=%d,b=%d",a,b);
	return 0;
}
