#include <iostream>
#include "Die.h"
using namespace std;

int main() {
	Die die1(6);			//simulates dice 1
	Die die2(6);			//simulates dice 2
	int playerScore = 0;	//tracks player score
	int cpuScore = 0;		//tracks computer score
	int done = 2;			//checks if player is done, 1 is done
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
