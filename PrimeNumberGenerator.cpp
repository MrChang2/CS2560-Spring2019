#include <iostream>
#include <vector>
#include <string>

void printVector(std::vector<int> v) {	//prints the vector
	for (int x = 0; x < (int)v.size(); x++) {
		std::cout << v[x] << " ";
	}
	std::cout << std::endl;
}
static bool isPrime(int num) {	//checks if the number is prime
	bool prime = true;	//assume number is prime, find counterexample
	if (num == 2) {	//2 is prime by default
		prime = true;
	}
	if (num % 2 == 0 && num!=2) {	//if number is even, it is not prime
		prime = false;
	}
	else {	//run through all odd numbers less than number, since if num is divisible by an even number, by default it is dvisible by 2
		for (int x = 3; x < num; x=x+2) {	//if number is divisible by odd number, it is not prime
			if (num%x == 0) {
				prime = false;
				break;
			}
		}
	}
	return prime;
}
void for_each(std::vector<int> vec) {	//runs through each vector element, checking if it is prime and printing the number if it is
	for (int x = 0; x < (int)vec.size(); x++) {
		if (isPrime(vec[x])) {
			std::cout << vec[x] << " ";
		}
	}
	std::cout << std::endl;
}
int main() {
	int input = 0;	//holds input
	int currentNum = 2;	//vector starts at 2
	while (input < 1) {	//loop continues until input is valid
		std::cout << "Enter the number limit(has to be greater than 1): " << std::endl;
		std::cin >> input;
		if (input < 1) {
			std::cout << "Invalid input. Try again." << std::endl;
		}
	}
	std::vector<int> v;	//initializes vector
	for (int x = 0; x < input-1; x++) {	//populates vector up to the input
		v.insert(v.begin() + x, currentNum);
		currentNum++;
	}
	printVector(v);	//prints vector

	//Searches for prime numbers and prints them
	std::cout << "Prime Numbers: ";
	for_each(v);

	char k;
	std::cout << "Enter any key to quit." << std::endl;
	std::cin >> k;
	return 0;
}
