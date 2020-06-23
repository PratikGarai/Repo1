#include<stdio.h>

const int MAX = 3;
int main()
{
	char *names[] = {"Pratik","Boy 1","Boy 99"};
	int i=0;
	for(int i=0;i<MAX;i++)
	{
		printf("%c\n",names[i]);
	}
	printf("\n\nDoing with integers now\n");
	// int *ptr[] = {1,10,200}; ERROR INVALID CONVERSION
	int *ptr[MAX];
	int val[] = {1,10,100};
	for(int i=0;i<MAX;i++)
	{
		ptr[i] = &val[i];
	}
	for(int i=0;i<MAX;i++)
	{
		printf("%d\n",*ptr[i]);
	}
	
	//Trying the INT pointer with int array
	int val1[]={1,10,100};
	int val2[]={2,20,200};
	int val3[]={3,30,300};
	int *ptr1[] = {val1,val2,val3};
	printf("\n\nTrying with array of INT\n\n");
	for(int i=0;i<MAX;i++)
	{
		printf("%d\n",*(ptr1[i]+1));
	}
	
	return 0;
}
