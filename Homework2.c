/*
 * Homework2.c
 *
 *  Created on: Feb 6, 2019
 *      Author: Matthew
 */


#include <stdio.h>
int restaurantBill() {
	double mealCost = 88.67;
	double tax = 88.67*0.0675;
	double tip = (mealCost+tax)*0.2;
	double total = mealCost+tax+tip;
	printf("Your meal cost $%.2f\n", mealCost);
	printf("Your tax is $%.2f\n", tax);
	printf("Your tip is $%.2f\n",tip);
	printf("Your total cost is $%.2f\n",total);
	return 0;
}
int oceanLevel() {
	double oceanLevel = 0;
	oceanLevel = oceanLevel + (5*1.5);
	printf("In 5 years, the ocean level will be %.1f mm higher.\n",oceanLevel);
	oceanLevel = oceanLevel + (2*1.5);
	printf("In 7 years, the ocean level will be %.1f mm higher.\n",oceanLevel);
	oceanLevel = oceanLevel + (3*1.5);
	printf("In 10 years, the ocean level will be %.1f mm higher.\n",oceanLevel);
	return 0;
}
int JoeStocks() {
	double stockCost = 1000*43.5;
	double commissionBuy = stockCost*0.02;
	double stockProfit = 1000*56.9;
	double commissionSell = stockProfit*0.02;
	double totals = stockProfit-commissionSell-commissionBuy-stockCost;
	printf("In total, Joe made $%.2f.\n",totals);
	return 0;
}
int patternPrint() {
	for (int x=0;x<10;x++) {
		for (int count=0;count<=x;count++) {
			printf("+");
		}
		printf("\n");
	}
	for (int y=10;y>0;y--) {
		for (int count=y;count>0;count--) {
			printf("+");
		}
		printf("\n");
	}
	return 0;
}
int main() {
	int first = restaurantBill();
	int second = oceanLevel();
	int third = JoeStocks();
	int fourth = patternPrint();
	return 0;
}
