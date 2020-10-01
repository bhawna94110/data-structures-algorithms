#include<iostream>
using namespace std;
const int CHAR=256;
int leftMost(string &str)
{
	int count[CHAR]={0};
	for(int i=0;i<str.length();i++)
		count[str[i]]++;
	for(int i=0;i<str.length();i++)
		if(count[str[i]]>1)
			return i;
}
int main()
{
	string s1="bhawna";
	cout<<leftMost(s1);
	return 0;
}
