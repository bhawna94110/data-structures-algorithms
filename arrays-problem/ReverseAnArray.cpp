#include<iostream>
using namespace std;
void reverse(int arr[],int n);
int main()
{
	int arr[] = {10,5,7,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	reverse(arr,n);
	cout<<"Reversed array is" <<endl;
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i] <<endl;
	}
	return 0;
}
void reverse(int arr[],int n)
{
	int low = 0,high = n-1;
	while(low<high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}
