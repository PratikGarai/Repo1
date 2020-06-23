#include<iostream>
using namespace std;
int binarySearch(int arr[],int item,int low,int high)
{
	while(low<high)
	{
		int mid = (low+high)/2;
		if(arr[mid]==item)
			return mid;
		else if(arr[mid]>item)
			high = mid-1;
		else
			low = mid+1;
	}
	 return (item>arr[low])?(low+1):low;
}
int iteration_search(int arr[],int item,int low,int high,int l)
{
	int k=0;
	for(int jump=l/2;jump>=1;jump=jump/2)
	{
		while((k+jump)<l && arr[k+jump]<=item) k+= jump;
	}
	return k;
}

int main()
{
	int n;
	cout<<"Length \?";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Item \?";
	int it;
	cin>>it;
	cout<<"Position : "<<iteration_search(arr,it,0,n,n);

	return 0;
}
