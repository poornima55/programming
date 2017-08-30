#include<stdio.h>
/*sorting by  selection sort method*/

int main()
{
	int n,i,j,min,temp;

	int a[100];

	printf("enter the array size\n");
	scanf("%d",&n);

	printf("now enter the arrayelements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("now trying to sort them");

	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i;j<n;j++)
		{
			if(a[j]<a[i])
			{
				min = j;
				break;
			}
		}

		if(i!=min)
		{
			temp =a[i];
			a[i]= a[min];
			a[min] = temp;
		}
	}

	printf("sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
