#include <iostream>

int main() {

	int input;
	std::cin >> input;
	if (input >= 90) {
		std::cout << "A";
	}
	else if (input >= 80 && input < 90) {
		std::cout << "B";
	}
	else if (input >= 70 && input < 80) {
		std::cout << "C";
	}
	else if (input >= 60 && input < 70) {
		std::cout << "D";
	}
	else {
		std::cout << "F";
	}


	return 0;
}