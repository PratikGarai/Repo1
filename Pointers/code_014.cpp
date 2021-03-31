#include<stdio.h>
#include<malloc.h>

void getter(int *a, int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		printf("Enter the %dth element : ",i+1);
		scanf("%d", a+i);
	}
}

void printer(int *a, int l)
{
	int i;
	printf("The elements are : ");
	for(i=0;i<l;i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\n");
}

void summer(int *a, int l)
{
	int i, s=0;
	for(i=0;i<l;i++)
	{
		s += *(a+i);
	}
	printf("The sum is : %d\n", s);
}

int main()
{
	int l;
	printf("In C++\n");
	printf("Enter the length of the array : ");
	scanf("%d", &l);
	int *arr = new int[l];
	getter(arr, l);
	printer(arr, l);
	summer(arr, l);
	delete[] arr;
	printf("\nTrying after free :\n");
	printer(arr, l); 		// will print all garbage

	return 0;
}
