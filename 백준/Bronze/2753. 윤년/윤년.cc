#include <iostream>

int main() {

	int input;
	std::cin >> input;
	if (input % 4 == 0 && input % 100 != 0 || input % 400 == 0) {
		std::cout << 1;

	}
	else {
		std::cout << 0;
	}

	return 0;
}