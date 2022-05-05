#include "header.h"
#include "bst.h"


void bst::insertNode(bstNode* node, std::string Data) {
	if (this->pHead == NULL) {
		this->pHead = new bstNode(Data);
		return;
	}

	if (Data < node->Data) {
		if (node->pLeft == NULL) {
			node->pLeft = new bstNode(Data);
			return;
		}
		insertNode(node->pLeft, Data);
	}
	else {
		if (node->pRight == NULL) {
			node->pRight = new bstNode(Data);
			return;
		}
		insertNode(node->pRight, Data);
	}

}
void bst::inOrderTraversal(bstNode* node) {
	if (node == NULL) {
		return;
	}

	if (node->pLeft != NULL) {
		inOrderTraversal(node->pLeft);
	}
	std::cout << node->Data << std::endl;
	if (node->pRight != NULL) {
		inOrderTraversal(node->pRight);
	}
}
void bst::postOrderTraversal(bstNode* node) {
	if (node == NULL) {
		return;
	}
	if (node->pLeft != NULL) {
		postOrderTraversal(node->pLeft);
	}

	if (node->pRight != NULL) {
		postOrderTraversal(node->pRight);
	}
	std::cout << node->Data << std::endl;
}
bool bst::isEmpty() {
	if (this->pHead == NULL) {
		return 1;
	}
	return 0;
}
void bst::destroyTree(bstNode* node) {
	if (node == NULL) {
		return;
	}
	if (node->pLeft != NULL) {
		destroyTree(node->pLeft);
	}

	if (node->pRight != NULL) {
		destroyTree(node->pRight);
	}
	std::cout << "deleting " << node->Data << std::endl;
	delete node;
}

void bst::preOrderTraversal(bstNode* node) {
	if (node == NULL) {
		return;
	}
	std::cout << node->Data << std::endl;
	if (node->pLeft != NULL) {
		preOrderTraversal(node->pLeft);
	}

	if (node->pRight != NULL) {
		preOrderTraversal(node->pRight);
	}
}


void bst::inOrderTraversal(bstNode* node, std::string arr[]) {
	static int i = 0;
	if (node == NULL) {
		return;
	}

	if (node->pLeft != NULL) {
		inOrderTraversal(node->pLeft, arr);
	}

	arr[i] = node->Data;
	i++;

	if (node->pRight != NULL) {
		inOrderTraversal(node->pRight, arr);
	}
}