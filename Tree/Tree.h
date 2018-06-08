#pragma once

#include <stdio.h>
#include <stdlib.h>

class Tree
{

private:
	// Creating nodes

	struct knoten
	{
		int data;					// data element
		struct knoten *left;		// pointer to left node
		struct knoten *right;	// pointer to right node
	};

	//struct knoten root;				// simple node

	//struct knoten *root = (knoten *)malloc(sizeof(knoten));		//pointer to a root

public:

	struct knoten *newNode(int element);

	int maxDepth(knoten *knoten);
};