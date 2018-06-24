#include "FirstTree.h"

FirstTree::FirstTree()
{
	root = (node *)malloc(sizeof(node));
	root->left = NULL;
	root->right = NULL;
}

void FirstTree::insert(int key)
{
	int remain = key % 2;
	if (remain == 0)	// if key is even
	{
		if (root->left == NULL)
		{
			leaf = (node *)malloc(sizeof(node));
			leaf->data = key;
			leaf->left = NULL;    // child nodes to null
			leaf->right = NULL;
			root->left = leaf;
		}
		else
		{
			leaf = (node *)malloc(sizeof(node));
			leaf->data = key;
			leaf->left = NULL;    // child nodes to null
			leaf->right = NULL;
		}
	}
	else
	{
		if (root->right == NULL)
		{
			leaf = (node *)malloc(sizeof(node));
			leaf->data = key;
			leaf->left = NULL;    // child nodes to null
			leaf->right = NULL;
			root->right = leaf;
		}
		else
		{
			leaf = (node *)malloc(sizeof(node));
			leaf->data = key;
			leaf->left = NULL;    // child nodes to null
			leaf->right = NULL;
		}
	}
}

void FirstTree::display()
{
	if (root->left != NULL || root->right != NULL)
	{
		if (root->left != NULL)
		{
			printf("\n\t\tData of left branch = %d\n", root->left->data);
		}
		if (root->right != NULL)
		{
			printf("\n\t\tData of right branch = %d\n", root->right->data);
		}
	}
	else
	{
		printf("\n\t\tDeep winter - no leaves in the tree.\n");
	}
}
