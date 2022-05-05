#pragma once
#include "header.h"
class bstNode
{
public:
	std::string Data;
	bstNode* pLeft;
	bstNode* pRight;


	bstNode(std::string newData);

	std::string getData() const { return Data; };
	bstNode* getLeftptr() const { return pLeft; };
	bstNode* getRightptr() const { return pRight; };
	void setData(std::string newData) { Data = newData; };
	void setLeftptr(bstNode* newLptr) { pLeft = newLptr; };
	void setRightptr(bstNode* newRptr) { pRight = newRptr; };
};

