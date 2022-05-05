#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "Node.h"

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;
using std::ofstream;
using std::fstream;

using std::string;

class BST
{
public:
	BST();
	~BST();

	void insert(std::string& newData);

private:
	Node* mpRoot;
	void insert(std::string& newData, Node* pTree);
	void destroyTree(); // will complete 7/7
};