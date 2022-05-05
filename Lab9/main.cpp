#include "header.h"
#include "bst.h"
#include "bstNode.h"

int main() {
	bst b;

	char str[100];
	std::string arr[50];
	std::fstream f;
	f.open("data.txt", std::fstream::in);
	int i = 0;
	std::cout << "Unsorted List:" << std::endl;
	while (!f.eof()) {
		f.getline(str, 100);
		std::cout << str << std::endl;
		b.insertNode(b.pHead, str);
		i++;
	}
	b.inOrderTraversal(b.pHead, arr);
	std::cout << std::endl;
	std::cout << "Sorted List:" << std::endl;
	for (int j = 0; j < i; j++) {
		std::cout << arr[j] << std::endl;
	}

	return 0;
}