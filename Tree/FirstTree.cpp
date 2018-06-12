#include "FirstTree.h"

FirstTree::FirstTree(int data)
{
	FirstTree::root = (node *)malloc(sizeof(node));
	root->data = data;
	root->left = root->right = NULL;
}

void FirstTree::display()
{
	if (root == NULL)
	{
		printf( "\n\t\tNo data\n");
	}
	else
	{
		printf("\n\t\tData of root = %d\n",root->data);
	}
}
