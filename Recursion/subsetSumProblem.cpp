#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countSubsets(int arr[],int n,int sum)
{
	if(n == 0) 
	{
		return (sum==0) ? 1:0;
	}
	return countSubsets(arr,n-1,sum) + countSubsets(arr,n-1,sum-arr[n-1]);
}
int main(){
	int ar[] = {1,2,3};
	int sum = 4;
	int n = 3;

	cout<<countSubsets(ar,n,sum);
}
