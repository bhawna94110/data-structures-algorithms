#include<iostream>
using namespace std;
typedef struct node
{
	int info;
	struct node *next;
}node;
node *ptr,*start=NULL;
void countLL();
void insertbeg(int);
void traverse();
int main()
{
	int data,n;
	char ch;
	do
	{
		cout<<"enter 1 for enter the array and 2 for traverse array 3 for print middle element"<<endl;
		cin>>n;
		switch(n)
		{
			case 1: cout<<"enter the element to insert in linked list"<<endl;
				cin>>data;
				insertbeg(data);
				break;
			case 2: traverse();
				break;
			case 3: countLL();
			break;
		}
		cout<<"enter y to enter again"<<endl;
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}
void insertbeg(int data)
{
	ptr = new node;
	ptr->info=data;
	if(start==NULL)
	{
		ptr->next=NULL;
		start=ptr;
	}
	else
	{
		ptr->next=start;
		start=ptr;
	}
}
void traverse()
{
	ptr = start;
	cout<<"The list is "<<endl;
	while(ptr!=NULL)
	{
		cout<<"element is "<<ptr->info<<endl;
		ptr=ptr->next;
	}
}
void countLL()
{
	int count = 0;
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
		count++;
	cout<<count<<endl;
}
