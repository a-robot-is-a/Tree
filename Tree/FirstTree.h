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

	node *root;
	node *leaf;
	node *ptLeft;
	node *ptRight;

public:

	FirstTree();
	void insert(int key);
	void display();
};