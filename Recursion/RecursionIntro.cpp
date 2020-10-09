#include<iostream>
using namespace std;
void fun1()
{
	cout<<"FUN1"<<endl;
}
void fun2()
{
	cout<<"before fun1"<<endl;
	fun1();
	cout<<"after fun1"<<endl;
}
int main()
{
	cout<<"before fun2"<<endl;
	fun2();
	cout<<"after fun2"<<endl;
	return 0;
}
