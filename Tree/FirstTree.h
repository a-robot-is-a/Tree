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

	node *leaf;

public:

	FirstTree();
	void insert(int key);
	void display();
};