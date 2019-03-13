#pragma once
#ifndef DIE_H
#define DIE_H

class Die
{
private:
	int sides;	//number of sides
	int value;	//the die's value
public:
	Die(int = 6);	//Constructor
	void roll();	//rolls the die
	int getSides();	//returns the number of sides
	int getValue();	//returns the die's value
};
#endif


