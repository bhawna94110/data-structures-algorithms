#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str="helloworld";
	cout<<str.length()<<" ";
	str=str+"xyz";
	cout<<str<<" ";
	cout<<str.substr(1,3)<<" ";
	cout<<str.find("ello")<<" ";
	return 0;
}
