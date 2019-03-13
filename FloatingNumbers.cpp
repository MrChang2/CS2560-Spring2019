#include "FloatingNumbers.h"
#include <iostream>
using namespace std;


FloatingNumbers::FloatingNumbers()
{
	arr = NULL;
	int input;
	cout << "Enter the size of the array you wish to work with: " << endl;
	cin >> input;
	arr = new float[input];
	size = input;
}


FloatingNumbers::~FloatingNumbers()
{
	delete arr;
}

void FloatingNumbers::storeNum(int i, float n) {
	arr[i] = n;
}
float FloatingNumbers::getNum(int i) {
	return arr[i];
}
float FloatingNumbers::getHighest() {
	int index = 0;
	float highest = arr[0];
	for (int x = 0; x < size; x++) {
		if (arr[x] > highest) {
			highest = arr[x];
			index = x;
		}
	}
	return highest;
}
float FloatingNumbers::getLowest() {
	int index = 0;
	float lowest = arr[0];
	for (int x = 0; x < size; x++) {
		if (arr[x] < lowest) {
			lowest = arr[x];
			index = x;
		}
	}
	return lowest;
}
int main() {
	FloatingNumbers test;
	int done = 0;
	int i = 0;
	int index = 0;
	float num = 0;
	while (done == 0) {
		cout << "What do you wish to do?" << endl;
		cout << "1. Store a number" << endl;
		cout << "2. Get a number" << endl;
		cout << "3. Get highest value" << endl;
		cout << "4. Get lowest value" << endl;
		cin >> i;
		switch (i) {
		case 1:
			cout << "Enter a number to store: " << endl;
			cin >> num;
			cout << "Enter the index you wish to store it in: " << endl;
			cin >> index;
			test.storeNum(index, num);
			break;
		case 2:
			cout << "Enter the index you wish to view: " << endl;
			cin >> index;
			test.getNum(index);
			break;
		case 3:
			num = test.getHighest();
			cout << "The highest value currently in the array is: " << num << endl;
			break;
		case 4:
			num = test.getLowest();
			cout << "The lowest value currently in the array is: " << num << endl;
			break;
		default:
			cout << "Fine be that way.";
		}
		cout << "Are you finished? Enter a nonzero number if yes" << endl;
		cin >> done;
	}

	char finished;
	cout << "Enter any key to exit." << endl;
	cin >> finished;
	return 0;
}
