#include<iostream>
using namespace std;
void lRotate(int arr[],int n);
int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	lRotate(arr,n);
	cout<<"Array after left rotation " <<endl;
	for(int i=0;i<n;i++)
	{
		cout<< arr[i] <<endl;
	}
}
void lRotate(int arr[],int n)
{
	int temp = arr[0];
	for(int i=1;i<n;i++)
	{
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}
