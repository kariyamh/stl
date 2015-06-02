#include <iostream>
#include <string>
#include <stdexcept>

#include "LinkedListChar.h"

using namespace std;
int main() {
	LinkedListChar emptyList;
	if (emptyList.size() != 0) {
		cout << "ERROR: Test 1" << std::endl;
	}
	try {
		emptyList.getChar(-1);
		cout << "Error: Test 2" << std::endl;
	} catch (const out_of_range& e) {
	}
	try {
		emptyList.getChar(1);
		cout << "Error: Test 3" << std::endl;
	} catch (const out_of_range& e) {
	}
	emptyList = LinkedListChar("");
	std::cout << "Hello, World!" << std::endl;
}
