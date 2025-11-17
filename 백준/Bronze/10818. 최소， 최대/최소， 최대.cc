#include <iostream>
#include <vector>

int main() {
	int n, x;
	std::cin >> n;
	std::vector<int> arr;
	for (int i = 0; i < n; i++) {
		std::cin >> x;
		arr.push_back(x);
	}
	int maximum = arr[0], minimum = arr[0];
	for (int val : arr) {
		if (val > maximum) maximum = val;
		if (val < minimum) minimum = val;
	}
	std::cout << minimum << " " << maximum;
	
	return 0;
}