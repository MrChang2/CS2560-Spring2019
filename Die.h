/**
* @file
@brief Header file to serve as the structure for the dice class.
*/
#pragma once
#ifndef DIE_H
#define DIE_H

class Die
{
private:
	int sides;	/**Records the number of sides for the dice*/
	int value;	/**Holds and records the dice's value*/
public:
	Die(int = 6);	/**Basically the default constructor, setting the number of sides to 6*/
	void roll();	/**Method to roll the dice by randomly generating a value between 1 and 6. Number is assigned to value*/
	int getSides();	/**Method to return number of sides, should always be 6*/
	int getValue();	/**Method to return current value of dice*/
};
#endif


