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
	node *newNode;

public:

	FirstTree(int data);
	void next(int data);
	void display();
};