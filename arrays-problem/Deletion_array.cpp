#include<iostream>
using namespace std;
int delEle(int arr[],int x);
int main()
{
	int arr[] = {3,8,12,5,6};
	int x = 12;
	int res = delEle(arr,x);
	cout<<"number of elements in array after deletion "<<res<<endl;
}
int delEle(int arr[],int x)
{
	int i,n=5;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
			break;
		if(i==n)
			return n;
		for(int j=i;j<n-1;j++)
		{
			arr[j]=arr[j+1];
			cout<<"array after dletion "<<arr[j]<<endl;
		}
	}
	return(n-1);
}
