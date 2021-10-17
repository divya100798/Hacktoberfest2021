#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	Node(int k)
	{
		data=k;
		left=right=NULL;
	}
};

void Spiral(Node *root)
{
	if(root==NULL)
	   return;
	
	queue<Node *> q;
	q.push(root);
	stack<int> st;
	bool reverse= false;
	
	while(!q.empty())
	{
		int size=q.size();
		
		if(reverse==false)
		{
			for(int i=0;i<size;i++)
			{
				Node *curr= q.front();
				q.pop();
				cout<<curr->data<<" ";
				if(curr->left!=NULL)
				  q.push(curr->left);
				
				if(curr->right!=NULL)
				   q.push(curr->right);
			}
		}
		else
		{
			for(int i=0;i<size;i++)
			{
				Node *curr= q.front();
				q.pop();
				st.push(curr->data);
				if(curr->left!=NULL)
				  q.push(curr->left);
				
				if(curr->right!=NULL)
				   q.push(curr->right);
			}
			
		}
		if(reverse==true)
		{
			while(!st.empty())
			{
				cout<<st.top()<<" ";
				st.pop();
			}
		}
		
		reverse=!reverse;
	}
}

int main()
{
	Node *root;
	root=new Node(2);
	root->left=new Node(7);
	root->left->left=new Node(3);
	root->left->right=new Node(6);
	root->left->right->right=new Node(11);
	root->left->right->left=new Node(5);
	root->right=new Node(8);
	root->right->right=new Node(9);
	root->right->right->left=new Node(4);
	
    Spiral(root);
   
   return 0;	
}
