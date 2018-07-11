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
		if (root->left == NULL)	// if there is no left root child
		{
			leaf = (node *)malloc(sizeof(node));
			leaf->data = key;
			leaf->left = NULL;
			leaf->right = NULL;
			root->left = leaf;
		}
		else	// if there is a root child
		{
			child = (node *)malloc(sizeof(node));
			child->data = key;
			child->left = NULL;
			child->right = NULL;
			leaf->left = child;
		}
	}
	else	// if key is odd
	{
		if (root->right == NULL)	// if there is no right root child
		{
			leaf = (node *)malloc(sizeof(node));
			leaf->data = key;
			leaf->left = NULL;
			leaf->right = NULL;
			root->right = leaf;
		}
		else	// if there is a root child
		{
			child = (node *)malloc(sizeof(node));
			child->data = key;
			child->left = NULL;
			child->right = NULL;
			leaf->left = child; // make a flowchart!
		}
	}
}

void FirstTree::display()
{
	if (root->left != NULL || root->right != NULL)
	{
		if (root->left != NULL)
		{
			printf("\n\t\tData of left leaf = %d\n", root->left->data);

			if (leaf->left != NULL)
			{
				printf("\n\t\tData of left leaf child = %d\n", leaf->left->data);
			}
		}
		if (root->right != NULL)
		{
			printf("\n\t\tData of right leaf = %d\n", root->right->data);
		}
	}
	else
	{
		printf("\n\t\tDeep winter - no leaves in the tree.\n");
	}
}
