/**
* @file
* @brief Program to provide functionality to the dice class.
*/
#include "Die.h"
#include <cstdlib>
#include <ctime>

/**
* @brief Constructor takes int and assigns it to sides variable. Also assigns first value through roll()
*/
Die::Die(int numSides)
{
	unsigned seed = time(0);

	srand(seed);

	sides = numSides;

	roll();
}
/**
* Method generates a random number through rand() and assigns it to value
*/
void Die::roll() {
	const int MIN_VALUE = 1;	//minimum die value
	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}
/**
* @brief Returns number of sides. Should always be 6
*/
int Die::getSides() {
	return sides;
}
/**
* Returns current value of dice. Always possible because roll() is called in constructor
*/
int Die::getValue() {
	return value;
}

