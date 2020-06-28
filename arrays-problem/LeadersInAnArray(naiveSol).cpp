#include<iostream>
using namespace std;
void leaders(int arr[],int n);
int main()
{
	int arr[] = {7,10,4,3,6,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	leaders(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<< arr[i] <<endl;
	}
}
void leaders(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		bool flag = false;
		for(int j=i+1;j<n;j++)
		{
			flag = true;
			break;
		}
		if(flag==false)
			cout<<arr[i];
	}
}
