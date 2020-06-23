#include<iostream>
using namespace std;
//fuctional requirements
void bubble_sort(int arr[],int l);

void merge_sort(int arr[],int a, int b);
void merge(int arr[] ,int l,int m, int h);

void quick_sort(int arr[], int l);


int main()
{
	int choice,length;
	cout<<"1. Bubble sort"<<"\n";
	cout<<"2. Merge sort"<<"\n";
	cout<<"3. Quick sort"<<"\n";
	cin>>choice;
	cout<<"Length\?"<<"\n";
	cin>>length;
	int array[length];
	for(int i=0;i<length;i++)
		cin>>array[i];
	switch(choice)
	{
		case 1:
			bubble_sort(array,length);
			break;
		case 2:
			merge_sort(array,0,length-1);
			break;
		case 3:
			quick_sort(array,length);
			break;
		default:
			cout<<"Invalid choice\n";
	}
	for(int i=0;i<length;i++)
		cout<<array[i]<<"  ";
	cout<<"\n";
	
	return 0;
}
void bubble_sort(int arr[],int l)
{
	for(int i=0;i<l-1;i++)
	{
		for(int j=0;j<l-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t= arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}

void merge_sort(int arr[],int a, int b)
{
	int mid;
	if(a<b)
	{
		mid = (a+b)/2;
		merge_sort(arr,a,mid);
		merge_sort(arr,mid+1,b);
		merge(arr,a,mid,b);
	}
	else
		return;
}
void merge(int arr[], int l, int m, int h)
{
	int b[sizeof(arr)/sizeof(int)];
	int count1=l,count2=m+1,counter=l;
	while(count1<=m && count2<=h)
	{
		if(arr[count1]<=arr[count2])
			b[counter++] = arr[count1++];
		else
			b[counter++] = arr[count2++];
	}
	while(count1<=m)
		b[counter++] = arr[count1++];
	while(count2<=h)
		b[counter++] = arr[count2++];
		
	for(int i=l;i<=h;i++)
		arr[i] = b[i];
}

void quick_sort(int arr[], int l)
{
	// do nothing
}
