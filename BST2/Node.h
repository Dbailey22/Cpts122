#pragma once

#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;
using std::ofstream;
using std::fstream;

using std::string;

class Node
{
public:
	Node(std::string newData = "");

	// getters
	std::string getData() const;
	Node* getLeft() const;
	Node* getRight() const;

	// setters
	void setData(const std::string& newData);
	void setLeft(Node* const& newpLeft);
	void setRight(Node* const& newpRight);

private:
	std::string mData;
	Node* mpLeft;
	Node* mpRight;
};