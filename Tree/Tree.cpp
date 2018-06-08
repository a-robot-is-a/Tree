/*
		gefunden auf: www.hackerearth.com/practice/
		data-structures/trees/binary-and-nary-trees/tutorial/
*/

#include "Tree.h"


// Utillity function returning node
Tree::knoten * Tree::newNode(int element)
{
	knoten *temp = (knoten * )malloc(sizeof(knoten));
	temp->data = element;
	temp->left = temp->right = NULL;

	return temp;
}


// Maximum depth/height of a tree

/* Die Idee besteht darin, eine Post-Order-Traversierung durchzuführen
	und zwei Variablen beizubehalten, um die linke Tiefe und die rechte Tiefe
	zu speichern und das Maximum beider Tiefen zurückzugeben.
*/


int Tree::maxDepth(knoten *knoten)
{
	if(knoten == NULL)
	{
		return 0;
	}
	else
	{
		/*compute the depth of each subtree*/
		int lDepth = maxDepth(knoten->left);
		int rDepth = maxDepth(knoten->right);

		/*use the larger one*/
		if (lDepth > rDepth)
		{
			return lDepth + 1;
		}
		else { return rDepth + 1; }
	}
}

