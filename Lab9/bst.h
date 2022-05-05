#pragma once
#include "String"
#include "bstNode.h"
class bst
{
public:
	bstNode* pHead;

	bst() { pHead = NULL; };

	void insertNode(bstNode* node, std::string Data);
	void inOrderTraversal(bstNode* node);
	void postOrderTraversal(bstNode* node);
	bool isEmpty();
	void destroyTree(bstNode* node);
	void preOrderTraversal(bstNode* node);
	void inOrderTraversal(bstNode* node, std::string arr[]);

};

