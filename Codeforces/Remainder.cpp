#include<iostream>
using namespace std;
int main()
{
	int len,x,y;
	cin>>len;
	cin>>x;
	cin>>y;
	char nu[len];
	cin>>nu;
	long long int op=0;
	for(int i = len-1;i>=len-y;i--)
	{
		if(nu[i]=='1')
			op++;
	}
	if(nu[len-1-y]=='0')
		op++;
	for(int i = len-y-2;i>=len-x;i--)
	{
		if(nu[i]=='1')
			op++;
	}
	cout<<op<<endl;

	return 0;
}
