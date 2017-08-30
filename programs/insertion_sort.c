#include<stdio.h>

int main()
{
	int n;
	int hole_position,i,value_to_insert;
	int a[100];

	printf("enter the array size\n");
	scanf("%d",&n);

	printf("now enter the  array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("let us try sorting them\n");

	for(i=1;i<n;i++)
	{
		hole_position = i;
		value_to_insert = a[i];

		while(hole_position>0 && value_to_insert<a[hole_position-1])
		{
			a[hole_position]= a[hole_position-1];
			hole_position--;
		}

		if(i!=hole_position)
		{
			a[hole_position]= value_to_insert;
		}

	}

	printf("sorted array\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);

	return 0;
}
