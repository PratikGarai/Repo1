#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000000];
	long long int count[26];
	for(int i =0;i<26;i++)
		count[i] = 0;
	scanf("%s",str);
	long long int l = strlen(str);
	for(int i=0;i<l;i++)
	{
		int ind = int(str[i]);
		count[ind-65] += 1;
	}
	int odds = 0;
	int index = 0;
	for(int i=0;i<26;i++)
	{
		if(count[i]%2!=0)
		{
			odds++;
			index = i;
		}
	}
	if(odds>1)
	{
		printf("NO SOLUTION");
	}
	else
	{
		long long int present = 0;
		for(int i=0;i<26;i++)
		{
			int times = count[i]/2;
			for(int j = 0;j<times;j++)
			{
				str[present] = i+65;
				str[l-present-1] = i+65;
				present++;
			}
		}
		if(odds==1)
			str[present] = index+65;
		printf("%s\n",str);
	}
	
	return 0;
}
