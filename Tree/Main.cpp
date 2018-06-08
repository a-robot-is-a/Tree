#include "Tree.h"

#include <iostream>
using namespace std;

int main(){

	Tree tree;

	cout << tree.newNode(47)->data;

	char end;
	cout << "\nProgramm beenden? j "; cin >> end;
	if (end == 'j') { return 0; }
	else { cin >> end; }

	return 0;
}