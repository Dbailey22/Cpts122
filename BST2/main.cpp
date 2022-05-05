// This example illustrates the objects and algorithms corresponding
// to a binary searh tree (BST)

// History: 7/6 - Declared class Node and parts of class BST.
//                We are implemented functions for class BST as
//                we see the need for them. This is a different
//                approach than in the past. Implemented constructor
//                for BST and public and private insert () functions.

#include "Node.h"
#include "BST.h"

int main(void)
{
	// BST object is on call stack
	BST tree; // default constructor - empty tree

	/*BST* pTree = new BST;
	delete pTree;*/

	tree.insert(std::string("Ethan"));

	return 0;
}