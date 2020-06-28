#include<iostream>
using namespace std;
int remDuplicates(int arr[],int n);
int main()
{
	int arr[] = {10,20,20,30,30,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result=remDuplicates(arr,n);
	cout<<"Array after removing duplication" <<endl;
	for(int i=0;i<result;i++)
	{
		cout<< arr[i] <<endl;
	}
}
int remDuplicates(int arr[],int n)
{
	int res = 1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[res-1])
		{
			arr[res] = arr[i];
			res++;
		}
	}
	return res;
}
