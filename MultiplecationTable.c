/*
 * MultiplecationTable.c
 *
 *  Created on: Mar 12, 2019
 *      Author: mchan
 */
#include <stdio.h>
int main() {
	int input;
	printf("What number do you want to go up to?\n");
	fflush(stdout);
	scanf("%d", &input);
	int table[input][input];
	for (int x=0;x<input;x++) {
		for (int y=0;y<input;y++) {
			table[x][y] = (x+1) * (y+1);
		}
	}
	for (int a=0;a<input;a++) {
		for (int b=0;b<input;b++) {
			printf("%d ", table[a][b]);
		}
		printf("\n");
	}

	return 0;
}

