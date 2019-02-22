/*
 * TicTacToe.c
 *
 *  Created on: Feb 18, 2019
 *      Author: mchan
*/
#include <stdio.h>
void printArray(char arr[][3], int size) {	//Prints array
	for (int x=0;x<size;x++) {
		for (int y=0;y<size;y++) {
			printf("%c ", arr[x][y]);
		}
		printf("\n");
	}
}
int winCondition(char arr[][3], int size) {
	if (arr[0][0]!='*' && arr[0][0]==arr[0][1] && arr[0][0]==arr[0][2]) {	//top row
		return 1;
	}
	else if (arr[1][0]!='*' && arr[1][0]==arr[1][1] && arr[1][0]==arr[1][2]) {	//middle row
		return 1;
	}
	else if (arr[2][0]!='*' && arr[2][0]==arr[2][1] && arr[2][0]==arr[2][2]) {	//bottom row
		return 1;
	}
	else if (arr[0][0]!='*' && arr[0][0]==arr[1][0] && arr[0][0]==arr[2][0]) {	//left column
		return 1;
	}
	else if (arr[0][1]!='*' && arr[0][1]==arr[1][1] && arr[0][1]==arr[2][1]) {	//middle column
		return 1;
	}
	else if (arr[0][3]!='*' && arr[0][3]==arr[1][3] && arr[0][3]==arr[2][3]) {	//right column
		return 1;
	}
	else if (arr[0][0]!='*' && arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2]) {	//top left to bottom right
		return 1;
	}
	else if (arr[2][0]!='*' && arr[2][0]==arr[1][1] && arr[2][0]==arr[0][2]) {	//bottom left to top right
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int done = 0;	//Checks if game is done
	int valid = 0;	//Checks for valid inputs
	int playerTurn = 1;	//Current player's number
	int turnNum = 0;	//Turn number. Should never exceed 9
	int row = 0;	//row input
	int col = 0;	//column input
	char grid[3][3] = {	//initialize grid
			{'*','*','*'},
			{'*','*','*'},
			{'*','*','*'}
	};
	printf("Welcome to TicTacToe!\n");
	printf("Let's Begin!\n");
	while (turnNum<9 && done==0) {	//Keeps going until 9 turns pass, or someone wins
		printf("Player %d's Turn\n",playerTurn);
		printArray(grid, 3);
		valid = 0;
		while (valid==0) {	//Checks validity for each input
			row = 0;
			col = 0;
			while (row<1 || row>3) {	//row number has to be 1-3
				printf("Pick a row: ");
				fflush(stdout);
				scanf("%d", &row);
				if (row<0 || row>3) {
					printf("Invalid Input\n");
				}
			}
			while (col<1 || col>3) {	//column number has to be 1-3
				printf("Pick a column: ");
				fflush(stdout);
				scanf("%d", &col);
				if (col<0 || col>3) {
					printf("Invalid Input\n");
				}
			}
			if (grid[row-1][col-1]!='*') {	//Checks if spot is already taken
				printf("Spot already taken.\n");
				row = 0;
				col = 0;
			}
			else {	//Sets valid to true
				valid++;
			}
		}	//End player input
		if (playerTurn==1) {	//If player 1's turn, print X, if player 2's turn, print O
			grid[row-1][col-1] = 'X';
		}
		else {
			grid[row-1][col-1] = 'O';
		}
		if (winCondition(grid, 3)==1) {	//If a player wins, set done to 1 to indicate finished game, also prints victory statement
			done = 1;
			printArray(grid, 3);
			printf("Player %d Wins!\n",playerTurn);
		}
		else {	//Alternates player turn number, increments turnNum
			if (playerTurn==1) {
				playerTurn++;
			}
			else {
				playerTurn--;
			}
			turnNum++;
		}
	}
	if (done==0) {	//If no one won, print Draw
		printArray(grid,3);
		printf("Draw!");
	}
	return 0;
}
