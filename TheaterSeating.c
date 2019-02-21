/*
 * TheaterSeating.c
 *
 *  Created on: Feb 18, 2019
 *      Author: mchan
 */
#include <stdio.h>
int availableSeats = 450;	//Number of available seats
double totalPrice = 0;		//Total cost of purchased tickets
void printSeating(char arr[][30]) {	//Method to print seating chart
	printf("                     Seats\n");
	printf("          123456789012345678901234567890\n");
	for (int x=0;x<15;x++) {
		printf("Row %d: ",x+1);
		if (x>=9) {
			printf("  ");
		}
		else {
			printf("   ");
		}
		for (int y=0;y<30;y++) {
			printf("%c",arr[x][y]);
		}
		printf("\n");
	}
}
void getAvailableRowSeatCount(char arr[][30], int row) {
	int count = 0;	//counts available seats
	for (int x=0;x<30;x++) {	//checks if array position has char '#', increments counter if yes
		if (arr[row-1][x]=='#') {
			count++;
		}
	}
	printf("Row %d has %d seats available.\n",row,count);
}
void purchaseSeat(char arr[][30], double p[]) {
	int row = 0;	//tracks row input
	int col = 0;	//tracks column input
	int done = 2;	//Confirms if user wants to commit to choice
	while (done==2) {
		while (row<=0 || row>15) {	//Takes row input and checks if it is valid.
			printf("Pick row: \n");
			fflush(stdout);
			scanf("%d",&row);
			if (row<=0 || row>15) {
				printf("Invalid row number. Try again.");
			}
		}
		while (col<=0 || row>30) {	//Takes column input and checks if it is valid.
			printf("Pick column: \n");
			fflush(stdout);
			scanf("%d",&col);
			if (col<=0 || col>30) {
				printf("Invalid column number. Try again.");
			}
		}
		if (arr[row-1][col-1]!='#') {	//Checks if seat is taken
			printf("Seat taken. Pick another.\n");
			row = 0;
			col = 0;
		}
		else {
			printf("Confirm Selection?\n");	//Gives user a chance to pick something else
			printf("1: Yes 2: No (Pick corresponding number)\n");
			fflush(stdout);
			scanf("%d",&done);
			if (done==2) {
				row = 0;
				col = 0;
			}
		}
	}
	totalPrice = totalPrice + p[row-1];
	arr[row-1][col-1] = '*';	//Updates seating chart
	printf("Seat purchase confirmed.\n");
}
int main() {
	char chart[15][30];		//Initializing initial seating chart
	double rowPrices[15];		//Initializing prices for each row
	int input = 0;		//Will take user input for desired operation
	int rowInput = 0;	//Used for the getAvailableRowSeatCount
	for (int x=0;x<15;x++) {	//Set each seat to unoccupied
		for (int y=0;y<30;y++) {
			chart[x][y] = '#';
		}
	}
	printf("Welcome to BND Theater!\n");
	printf("Please enter the assigned ticket prices.\n");
	for (int z=0;z<15;z++) {	//Takes input for ticket prices for each row.
		printf("Enter price for row %d: ",z+1);
		fflush(stdout);
		scanf("%lf", &rowPrices[z]);
	}
	while (input!=4) {
		printSeating(chart);
		printf("Current Price Total: $%.2f\n",totalPrice);
		printf("\n");
		printf("What would you like to do?\n");
		printf("Select a corresponding number to select an option.\n");
		printf("1: Purchase Seat\n");
		printf("2: Count total available seating\n");
		printf("3: Count available seats in selected row\n");
		printf("4: Quit\n");
		fflush(stdout);
		scanf("%d", &input);
		switch(input) {
		case 1: purchaseSeat(chart, rowPrices);
				availableSeats--;
				break;
		case 2: printf("%d Seats available\n", availableSeats);
				break;
		case 3:
			rowInput = 0;
			while (rowInput<=0 || rowInput>15) {
				printf("Which row do you want to count: \n");
				fflush(stdout);
				scanf("%d",&rowInput);
				if (rowInput<=0 || rowInput>15) {
					printf("Invalid Input. Try again.\n");
				}
			}
			getAvailableRowSeatCount(chart, rowInput);
			break;
		case 4:
			printf("Have a nice day!\n");
			break;
		default: printf("Invalid Input. Try again\n");
		}
	}
	return 0;
}
