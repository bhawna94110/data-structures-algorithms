#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countSpecials(int arr[], int sizeof_array, int K){
    
    int f = floor(sizeof_array/K), count = 0,c=0;
    
    // In the given array, 1 and 4 occurs floor(5/2) = 2 times. So count is 2.
    //input:- k=2,n=5,arr = 1,4,1,2,4
    // Your code here
    for(int i = 0; i<sizeof_array;i++)
    {
        	for(int j = i+1;j<sizeof_array;j++)
        	{
            	if(arr[i]==arr[j])
                	count++;
        	}
        	if (count==f)
               {
                 c++;  
                }
    }
    return count;
}
int main()
{
	int sizeof_array,arr[100],i,k;
	cout<<"enter the value of k"<<endl;
	cin>>k;
	cout<<"enter the size of an array"<<endl;
	cin>>sizeof_array;
	cout<<"enter the elements into array"<<endl;
	for(i = 0;i<sizeof_array; i++)
	{
		cin>>arr[i];
	}
	cout<<"special elements"<<endl;
	cout<<countSpecials(arr,sizeof_array,k)<<endl;
}
