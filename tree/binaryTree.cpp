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
void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<(root->key)<<",";
		inorder(root->right);
	}
}
void preorder(node *root)
{
	if(root!=NULL)
	{
		cout<<(root->key)<<",";
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node *root)
{
	if(root!=NULL)
	{
		preorder(root->left);
		preorder(root->right);
		cout<<(root->key)<<",";
	}
}
int main()
{
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->right=new node(40);
	cout<<"inorder traversal:"<<endl;
	inorder(root);
	cout<<endl<<"preorder traversal:"<<endl;
	preorder(root);
	cout<<endl<<"postorder traversal:"<<endl;
	postorder(root);
}
