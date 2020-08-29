													//print all the nodes at distance k, where k is the level of tree and level starts from 0

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
void printKDist(node *root,int k)
{
	if(root==NULL) return;
	if(k==0)
		cout<<(root->key)<<" ";
	else
	{
		printKDist(root->left,k-1);
		printKDist(root->right,k-1);
	}
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
	printKDist(root,2);
}
