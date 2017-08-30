#include<stdio.h>
void print_num(int index)
{
	if(index>500)
	return;
	else
	{
		printf("%d\t",index);
		index =index+1;
		print_num(index);
	}
}
int main()
{
	int i =0;
	printf("trying to print from 0 to 500 recurively");

	print_num(i);

	return 0;
}
