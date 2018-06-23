#include "Tree.h"
#include "FirstTree.h"

#include <iostream>
using namespace std;

void beenden()
{
	char end;
	while (true)
	{
		cout << "\nProgramm beenden? j/n "; cin >> end;
		if (end == 'j') { break; }
	}
}

int main(){

	Tree tree;
	cout << "\n\t\tAfter a little thought: " 
		<< tree.newNode(42)->data << " :)" << endl;

	// The first tree
	FirstTree fTree;
	fTree.insert(2, fTree.leaf);
	fTree.insert(4, fTree.leaf);
	fTree.insert(3, fTree.leaf);
	fTree.insert(5, fTree.leaf);
	fTree.display();
	
	beenden();
	return 0;
}