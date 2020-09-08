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
bool isSum(node *root)
{
	if(root==NULL) return true;
	if(root->left==NULL && root->right==NULL)
		return true;
	int sum=0;
	if(root->left!=NULL)
		sum+=root->left->key;
	if(root->right!=NULL)
		sum+=root->right->key;
	return (root->key==sum && isSum(root->left) && isSum(root->right));
}
int main()
{
	node *root=new node(20);
	root->left=new node(8);
	root->right=new node(12);
	root->left->left=new node(3);
	root->left->right=new node(5);                //   20
												//	   /\
												//	 8   12               20 is root, 3+5=8 equal to its root 8+12=20 so, it is true
												//	 /\
												//	3  5
	cout<<isSum(root);
}
