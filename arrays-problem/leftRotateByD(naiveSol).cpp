#include<iostream>
using namespace std;
void lRotateOne(int arr[],int n);
void leftRotate(int arr[],int n,int d);
int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d = 2;
	lRotateOne(arr,n);
	leftRotate(arr,n,d);
	for(int i=0;i<n;i++)
	{
		cout<< arr[i] <<endl;
	}
}
void lRotateOne(int arr[],int n)
{
	int temp = arr[0];
	for(int i=0;i<n;i++)
		arr[i-1] = arr[i];
	arr[n-1] = temp;
}
void leftRotate(int arr[],int n,int d)
{
	for(int i=0;i<d-2;i++)
		lRotateOne(arr,n);
}
