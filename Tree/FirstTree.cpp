#include "FirstTree.h"

FirstTree::FirstTree(int data)
{
	FirstTree::root = (node *)malloc(sizeof(node));
	root->data = data;
	root->left = root->right = NULL;
}

void FirstTree::next(int data)
{
	int remain = data % 2;
	FirstTree::newNode = (node *)malloc(sizeof(node));
	newNode->data = data;
	if (remain == 0) // if the number is even
	{
		root->left = newNode;
		root->right = NULL;
	}
	else
	{
		root->left = NULL;
		root->right = newNode;
	}
}

void FirstTree::display()
{
	if (root == NULL)
	{
		printf( "\n\t\tNo data\n");
	}
	else
	{
		if (root->left != NULL || root->right != NULL)
		{
			if (root->left != NULL)
			{
				printf("\n\t\tData of root->left = %d\n", root->left->data);
			}
			else
			{
				printf("\n\t\tData of root->right = %d\n", root->right->data);
			}
		}		
	}
}
