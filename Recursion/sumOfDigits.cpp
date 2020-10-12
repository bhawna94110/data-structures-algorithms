#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
	if(n<10) return n;
	return sumOfDigits(n/10) + n%10;
}
int main()
{
	cout<<sumOfDigits(253);
	return 0;
}
