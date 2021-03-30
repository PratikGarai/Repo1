#include<stdio.h>

int main()
{
	int r=2, c=3, i, j;
	int B[2][3] = {{1,2,3}, {4,5,6}};
	// int C[r][c] = {{1,2,3}, {4,5,6}};  	// limits of an array that is being
						// initialized cannot be variable 

	printf("\nPrinting using B : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ", B[i][j]);
		printf("\n");
	}

	printf("\n&B[0][0] == B[0] => %d\n", &B[0][0]==B[0]);

	// int *p = B; 		// wrong, B[0] is an array
				// so can't assign it to int*
	
	int (*p)[3] = B; 	// first row's begin address in p
	int (*q)[c] = B; 	// here, variables are allowed
	int (*s)[] = B; 	// even no limits work

	printf("\n printing using p : ");
	for(i=0;i<3;i++)
		printf("%d ", *(*(p)+i));
	printf("\n printing using q : ");
	for(i=0;i<3;i++)
		printf("%d ", *(*(q)+i));
	printf("\n printing using s : ");
	for(i=0;i<3;i++)
		printf("%d ", *(*(s)+i));

	int (*t)[3] = B+1;
	printf("\n printing second row using t : ");
	for(i=0;i<3;i++)
		printf("%d ", *(*(t)+i));

	return 0;
}
