/*
 * Population.c
 *
 *  Created on: Feb 15, 2019
 *      Author: mchan
 */
#include <stdio.h>
int main() {
	int currentPop, birthRate, deathRate, years;
	while (currentPop<2) {
		printf("Starting population: \n");
		fflush(stdout);
		scanf("%d",&currentPop);
		if (currentPop<2) {
			printf("Population has to be at least 2.\n");
		}
	}
	while (birthRate<0) {
		printf("Birth Rate: \n");
		fflush(stdout);
		scanf("%d",&birthRate);
		if (birthRate<0) {
			printf("Birth Rate cannot be negative.\n");
		}
	}
	while (deathRate<0) {
		printf("Death Rate: \n");
		fflush(stdout);
		scanf("%d",&deathRate);
		if (birthRate<0) {
			printf("Death Rate cannot be negative.\n");
		}
	}
	while (years<1) {
		printf("How many years to track: \n");
		fflush(stdout);
		scanf("%d",&years);
		if (years<1) {
			printf("Number of years has to be at least one.\n");
		}
	}
	printf("Starting population: %d\n",currentPop);
	for (int x=1;x<=years;x++) {
		currentPop = currentPop + birthRate - deathRate;
		printf ("Year %d: %d ",x,currentPop);
	}
	return 0;
}

