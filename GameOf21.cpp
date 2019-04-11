/**
* Copyright (C) 2019 Matthew Chang
*
* This file is a part of Gameof21
*
* I did this for homework. If you want to use it for some reason, go ahead.
*/

/**
* @file 
* @author Matthew Chang
* @date 4/10/2019
* @brief The main testing program.
*/
#include <iostream>
#include "Die.h"
using namespace std;

/**
* @brief The main method of the whole project. Runs all relevant methods.
*/
int main() {
	Die die1(6);			/**<Simulates the first dice*/
	Die die2(6);			/**<Simulates the second dice*/
	int playerScore = 0;	/**Tracks and records the player's current score*/
	int cpuScore = 0;		/**Tracks and records the CPU's current score*/
	int done = 2;			/**Takes player input, where any non-two number indicates that player is finished*/
	int rollPrompt = 1;

	//roll for player
	die1.roll();		
	die2.roll();
	playerScore = die1.getValue() + die2.getValue();

	//roll for CPU
	die1.roll();
	die2.roll();
	cpuScore = die1.getValue() + die2.getValue();

	
	while (done != 1) {		//while player isn't done
		cout << "Player Score: " << playerScore << endl;
		if (cpuScore < 17) {
			die1.roll();
			die2.roll();
			cpuScore = cpuScore + die1.getValue() + die2.getValue();
		}
		cout << "Do you want to roll? Enter 1: No" << endl;
		cin >> done;
		if (done != 1) {
			die1.roll();
			die2.roll();
			playerScore = playerScore + die1.getValue() + die2.getValue();
		}
	}
	cout << "Player Score: " << playerScore << endl;
	cout << "CPU Score: " << cpuScore << endl;
	if (playerScore > cpuScore && playerScore <= 21) {
		cout << "You win!" << endl;
	}
	else if (playerScore < cpuScore && cpuScore > 21) {
		cout << "You win!" << endl;
	}
	else {
		cout << "You lose!" << endl;
	}
	cout << "Press anything to exit." << endl;
	cin >> done;
	return 0;
}
