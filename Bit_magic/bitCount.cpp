#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int countSet(int n)
{
	int res=0;
	while(n!=0)
	{
		if(n%2!=0)   // or if((n&1)==1);
		{
			res++;
		}
		n=n/2;  // or n = n>>1;
	}
	return res;
}
int main()
{
	int n=5;
	cout<<countSet(n);
	return 0;
}
