#include "Die.h"
#include <cstdlib>
#include <ctime>

Die::Die(int numSides)
{
	unsigned seed = time(0);

	srand(seed);

	sides = numSides;

	roll();
}
void Die::roll() {
	const int MIN_VALUE = 1;	//minimum die value
	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}
int Die::getSides() {
	return sides;
}
int Die::getValue() {
	return value;
}
