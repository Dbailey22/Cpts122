#include "BST.h"

BST::BST()
{
	this->mpRoot = nullptr; // implies empty tree
}

BST::~BST()
{
	//destroyTree();
}

void BST::insert(std::string& newData) // public
{
	insert(newData, this->mpRoot); // private call
}

// private
void BST::insert(std::string& newData, Node* pTree)
{
	if (pTree == nullptr) // base case
	{
		// implies? empty tree - root ptr
		this->mpRoot = new Node(newData); // replaces the need for makeNode ()
	}
	else
	{
		if (pTree->getData() < newData)
		{
			// where do we go in the tree? go right
			if (pTree->getRight() == nullptr)
			{
				pTree->setRight(new Node(newData));
			}
			else
			{
				// recursive step
				insert(newData, pTree->getRight());
			}
		}
		else if (pTree->getData () > newData) // go left
		{
			if (pTree->getLeft() == nullptr)
			{
				pTree->setLeft(new Node(newData));
			}
			else
			{
				// go down the left side of tree
				insert(newData, pTree->getLeft());
			}
		}
	}
}