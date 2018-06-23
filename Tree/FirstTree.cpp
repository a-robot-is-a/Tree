#include "FirstTree.h"

FirstTree::FirstTree()
{
	leaf = (node *)malloc(sizeof(node));
	leaf->left = NULL;
	leaf->right = NULL;
}

void FirstTree::insert(int key, node *leaf)
{
	int remain = key % 2;
	if (remain == 0)
	{
		if (leaf->left != NULL)
		{
			insert(key, leaf->left);
		}
		else
		{
			leaf->left = (node *)malloc(sizeof(node));
			leaf->left->data = key;
			leaf->left->left = NULL;    //Sets the left child of the child node to null
			leaf->left->right = NULL;   //Sets the right child of the child node to null
		}
	}
	else
	{
		if (leaf->right != NULL)
		{
			insert(key, leaf->right);
		}
		else
		{
			leaf->right = (node *)malloc(sizeof(node));
			leaf->right->data = key;
			leaf->right->left = NULL;  //Sets the left child of the child node to null
			leaf->right->right = NULL; //Sets the right child of the child node to null
		}
	}
}

void FirstTree::display()
{
	if (leaf->left != NULL || leaf->right != NULL)
	{
		while (leaf->left != NULL)
		{
			printf("\n\t\tData of left leaf = %d\n", leaf->left->data);
			leaf->left = leaf->left->left;
		}
		while (leaf->right != NULL)
		{
			printf("\n\t\tData of right leaf = %d\n", leaf->right->data);
			leaf->right = leaf->right->right;
		}
	}
	else
	{
		printf("\n\t\tDeep winter - no leaves in the tree.\n");
	}
}
