#include<iostream>
using namespace std;
int search(int arr[],int n,int x);
int main()
{
	int arr[100],a,b;
	cout<<"Enter the limit of an array"<<endl;
	cin>>a;
	cout<<"Enter the elemenets into the array"<<endl;
	for(int i=0;i<=a;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the number you want to search in an array"<<endl;
	cin>>b;
	int res = search(arr,a,b);
	cout<<"result is "<<res<<endl;
	return 0;
}
int search(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
	return -1;
}

