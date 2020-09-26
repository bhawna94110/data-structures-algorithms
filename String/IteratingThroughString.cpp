#include<iostream>
using namespace std;
int main()
{
	string str="helloWorld";
	for(int i=0;i<str.length();i++)
		cout<<str[i];
	cout<<endl;
	for(char x : str)   //for each looop
		cout<<x;
}
