#include<iostream>
using namespace std;
int leftMost(string &str)
{
	for(int i=0;i<str.length();i++)
	{
		for(int j=i+1;j<str.length();j++)
		{
			if(str[i]==str[j])
				return i;
		}
	}
	return -1;
}
int main()
{
	string s1="abbc";
	cout<<leftMost(s1);
	return 0;
}
