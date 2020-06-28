#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,i,ele,pos;
	cout<<" Enter the limit of an array" <<endl;
	cin>>n;
	cout<< "Enter the elements into the array" <<endl;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	cout<< "Enter the element to be insert and the position where you want to insert your element" <<endl;
	cin>>ele>>pos;
	for(i=n;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=ele;
	cout<<"array after inserted an element at position"<<endl;
	for(i=1;i<=n+1;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
