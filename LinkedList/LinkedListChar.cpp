#include <stdexcept>
#include "LinkedListChar.h"

LinkedListChar::LinkedListChar(void) : firstNode() {}

LinkedListChar::LinkedListChar(const std::string& init):
		firstNode() {
	int len = init.length();
	
	//TODO
}


int LinkedListChar::size() const {
	int curSize = 0;
	LinkedListChar::Node* curNode = const_cast<LinkedListChar::Node*>(&firstNode);
	while (curNode->nextNode != 0) {
		curNode = curNode->nextNode;
		++curSize;
	}
	return curSize;
}

void LinkedListChar::append(char c){
	LinkedListChar::Node* newNode = new LinkedListChar::Node;
	newNode->curChar = c;
	newNode->nextNode = 0;

	LinkedListChar::Node* cur = const_cast<LinkedListChar::Node*>(&firstNode);
	while (cur->nextNode != 0) {
		cur = cur->nextNode;
	}
	cur->nextNode = newNode;
	return;
}

char LinkedListChar::getChar(int index) const {
	LinkedListChar::Node* cur =  const_cast<LinkedListChar::Node*>(&firstNode);
	int curInd = 0;
	while (cur->nextNode != 0) {
		if (curInd == index) {
			return cur->curChar;
		}
		++curInd;
	}
	throw std::out_of_range("Index out of range");
}
