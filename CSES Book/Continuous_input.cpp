#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	vector<int> v;
	for(int i=0;i<t;i++)
	{
		int k ;
		cin>>k;
		v.push_back(k);
	}
	for(int i=0;i<t;i++)
	{
		cout<<v[i]<<"\n";
	}
}
