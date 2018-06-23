#pragma once
#include <stdlib.h>
#include <stdio.h>

class FirstTree {

private:

	struct node {
		int data;
		node *left;
		node *right;
	};

public:

	FirstTree();
	node *leaf;
	void insert(int key, node *leaf);
	void display();
};