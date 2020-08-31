#include<iostream>
using namespace std;
struct node
{
	int key;
	node *left,*right;
	node(int k)
	{
		key=k;
		left=right=NULL;
	}
};
int maxLevel=0;
void printLeftView(node *root,int level)
{
	if(root==NULL) return;
	if(maxLevel<level)
	{
		cout<<(root->key)<<" ";
		maxLevel=level;
	}
	printLeftView(root->left,level+1);
	printLeftView(root->right,level+1);
}
int main()
{
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->right->right=new node(6);
	root->left->left=new node(8);
	root->left->right=new node(7);
	root->left->right->left=new node(9);
	root->left->right->right=new node(15);
	printLeftView(root,1);
}
