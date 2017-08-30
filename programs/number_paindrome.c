#include<stdio.h>
int main()
{
	int num,org,rev,rem;

	printf("enter the number\n");
	scanf("%d",&num);

	rev=0;
	org=num;

	while(num>0)
	
	{
		rem = num%10;
		rev= rev*10+rem;
		num/=10;
	}
	if(org==rev)
	printf("the number is a palindrome\n");
	else
	printf("not a palindrome\n");
	return 0;
}
	
