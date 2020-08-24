
										//Get size of binary tree i.e how many nodes are there in tree

#include<iostream>
#include<queue>
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
int getSize(node *root)
{
	if(root==NULL) 
	{
		return 0;
    }
	else
	{
		return 1+getSize(root->left)+getSize(root->right);
	}
}
int main()
{
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(8);
    root->left->right=new node(7);
    root->right->right=new node(6);
    root->left->right->left=new node(9);
    root->left->right->right=new node(15);
    cout<<"Get size of Binary Tree"<<endl;
    cout<<getSize(root);
}
