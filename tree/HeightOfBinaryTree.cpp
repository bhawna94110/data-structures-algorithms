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
int height(node *root)
{
	if(root==NULL)
		return 0;
	else
		return max(height(root->left),height(root->right))+1;
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
    cout<<"Maximum in Binary Tree"<<endl;
    cout<<height(root);
}
