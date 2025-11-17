#include <iostream>

int main() {
	int count = 0;
	std::cin >> count;

	for (int i = 1; i <= count; i++) {
		if (i % 4 == 0) {
			std::cout << "long ";
		}
	}
	std::cout << "int";


	return 0;
}