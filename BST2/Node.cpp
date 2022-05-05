#include "Node.h"

Node::Node(std::string newData)
{
	// the memory is already on heap
	this->mData = newData; // what = is this?; std::string = 
	this->mpLeft = nullptr;
	this->mpRight = nullptr;
}

// getters
std::string Node::getData() const
{
	return this->mData;
}

Node* Node::getLeft() const
{
	return this->mpLeft;
}

Node* Node::getRight() const
{
	return this->mpRight;
}

// setters
void Node::setData(const std::string& newData)
{
	this->mData = newData;
}

void Node::setLeft(Node* const & newpLeft)
{
	this->mpLeft = newpLeft;
}

void Node::setRight(Node* const & newpRight)
{
	this->mpRight = newpRight;
}
