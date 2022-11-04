#include<iostream>
using namespace std;
struct node{
	int data;
	node *left, *right;
};


node *insert(node *root, int item)
{
	if(root == NULL)
	{
		root = new node;
		root -> data = item;
		root -> left = root -> right = NULL;
	}
	else if(item<root->data)
	{
		root->left = insert(root->left, item);
	}
	else
	{
		root->right = insert(root->right, item);
	}
	return root;
}

	
//pretorder traversal
void preorder(node *root)
{
	if(root == NULL)
	{
		return;
	}
	else
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}


//inorder traversal
void inorder(node *root)
{
	if(root == NULL)
	{
		return;
	}
	else
	{
		preorder(root->left);
		cout<<root->data<<" ";
		preorder(root->right);
	}
}


//postorder traversal
void postorder(node *root)
{
	if(root == NULL)
	{
		return;
	}
	else
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}
void search(node *root, int item)
{
	bool found = true;
	if(root == NULL)
	{
		cout<<"Never found";
		return;
	}
	else if(item == root -> data)
		cout<<item<<"found ";
	else if(item < root->data)
		search(root->left, item);
	else
		search(root->right, item);
	return;
}


int main()
{
	node *root=NULL;
	int i, n, item;
	cout<<"how many values";
	cin>>n;
	cout<<"Enter values ";
	for(i = 0; i<n; i++)
	{
		cin>>item;
		root = insert(root,item);
	}
	cout<<"\nPreorder traversal :";
	preorder(root);
	
	cout<<"\nInorder traversal :";
	inorder(root);
	
	cout<<"\nPostorder traversal :";
	postorder(root);
	
	cout<<"\nEnter value to search :";
	cin>>item;
	
	if(root == NULL)
	{
		cout<<"empty root";
		return (0);
	}
	
	search(root, item);
}
