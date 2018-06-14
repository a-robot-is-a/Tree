#include "Tree.h"
#include "FirstTree.h"

#include <iostream>
using namespace std;

int main(){

	Tree tree;
	cout << "\n\t\tAfter a little thought: " 
		<< tree.newNode(42)->data << " :)" << endl;

	// The first tree
	FirstTree fTree(0);
	fTree.next(2);
	fTree.next(3);
	fTree.display();



	char end;
	cout << "\nProgramm beenden? j/n "; cin >> end;
	if (end == 'j') { return 0; }
	else { cin >> end; }

	return 0;
}