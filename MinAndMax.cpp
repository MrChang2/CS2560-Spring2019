#include <iostream>
#include <string>

template <typename T>
T minimum(const T a, const T b) {
	if (a < b) {
		std::cout << "a is less than b." << std::endl;
		return a;
	}
	else {
		std::cout << "b is less than a." << std::endl;
		return b;
	}
}
template <typename T>
T maximum(const T a, const T b) {
	if (a > b) {
		std::cout << "a is greater than b." << std::endl;
		return a;
	}
	else {
		std::cout << "b is greater than a." << std::endl;
		return b;
	}
}
int main() {
	std::cout << "Running minimum and maximum with values 3.5 and 3, T is int." << std::endl;
	std::cout << "Minimum: " << minimum<int>(3.5, 3) << std::endl;
	std::cout << "Maximum: " << maximum<int>(3.5, 3) << std::endl;
	std::cout << "By default, the second value is printed since the two are considered equal as integers." << std::endl;

	std::cout << "Running the same methods with the same values, but with T as double." << std::endl;
	std::cout << "Minimum: " << minimum<double>(3.5, 3) << std::endl;
	std::cout << "Maximum: " << maximum<double>(3.5, 3) << std::endl;
	std::cout << "Now a is considered greater than b, since T is double." << std::endl;

	char k;
	std::cout << "Enter any key to quit." << std::endl;
	std::cin >> k;
	return 0;
}
