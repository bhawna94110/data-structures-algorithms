#include<iostream>
using namespace std;
int insert(int arr[],int n,int x, int cap,int pos);
int main()
{
	int arr[]={5,30,20},a,b,c,d;
	cout<<"Enter the limit of an array"<<endl;
	cin>>a;
	cout<<"enter the number you want to insert in an array"<<endl;
	cin>>b;
	cout<<"capacity of an array"<<endl;
	cin>>c;
	cout<<"enter the position"<<endl;
	cin>>d;
	int res = insert(arr,a,b,c,d);
	cout<<"array after insertion "<<endl;
	for(int i=0;i<=a;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"result is "<<res<<endl;
	return 0;
}
int insert(int arr[],int n,int x, int cap,int pos)
{
	if(n==cap)
	{
		return n;
	}
	int idx = pos-1;
	for(int i = n-1;i>idx;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[idx] = x;
	return(n+1);
}
