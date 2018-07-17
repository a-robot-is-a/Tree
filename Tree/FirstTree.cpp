#include "FirstTree.h"

FirstTree::FirstTree()
{
	root = (node *)malloc(sizeof(node));
	root->data = NULL;
	root->left = NULL;
	root->right = NULL;

	ptLeft = root;
	ptRight = root;
}

void FirstTree::insert(int key)
{
	int remain = key % 2;
	if (remain == 0)	// if key is even
	{
		leaf = (node *)malloc(sizeof(node));
		leaf->data = key;
		leaf->left = NULL;
		leaf->right = NULL;

		ptLeft->left = leaf;
		ptLeft = leaf;

	}
	else
	{
		leaf = (node *)malloc(sizeof(node));
		leaf->data = key;
		leaf->left = NULL;
		leaf->right = NULL;

		ptRight->right = leaf;
		ptRight = leaf;
	}
}

void FirstTree::display()
{
	if (root->left != NULL || root->right != NULL)
	{
		//loop through the leafs
		if (root->left != NULL)
		{
			while (root->left != NULL)
			{
				printf("\n\t\tData of left leafs = %d\n", root->left->data);

				root->left = root->left->left;
			}
		}

		if (root->right != NULL)
		{
			while (root->right != NULL)
			{
				printf("\n\t\tData of right leafs = %d\n", root->right->data);

				root->right = root->right->right;
			}
		}
	}
	else
	{
		printf("\n\t\tDeep winter - no leaves in the tree.\n");
	}
}
