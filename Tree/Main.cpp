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
	FirstTree fTree(0);
	fTree.next(2);
	fTree.next(3);
	fTree.display();

	
	beenden();
	return 0;
}