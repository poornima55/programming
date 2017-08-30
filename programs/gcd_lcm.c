#include<stdio.h>
/* trying to find hcf and lcm by coding*/
int main()
{
	int a,b;
	int temp1,temp2,temp;
	int hcf,lcm;
	printf("enter the 2 numbers\n");
	scanf("%d%d",&a,&b);
	temp1 = a;
	temp2 = b;
	while(b!=0)
	{
		temp = b;
		b = a%b;
		a = temp;
	}

	hcf = a;
	lcm = (temp1*temp2)/hcf;

	printf("HCF= %d and LCM = %d\n",hcf,lcm);
	return 0;
}
