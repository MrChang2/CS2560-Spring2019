/*
 * ReverseArray.c
 *
 *  Created on: Feb 18, 2019
 *      Author: mchan
 */
#include <stdio.h>
int * reverseArray(int arr[], int size) {
	int reversedArr[size];
	for (int x=0;x<size;x++) {
		reversedArr[x] = arr[size-1-x];
	}
	return reversedArr;
}
int printArray(int arr[], int size) {
	for (int x=0;x<size;x++) {
		printf("%d ",arr[x]);
		if (x==size-1) {
			printf("\n");
		}
	}
	return 0;
}
int main() {
	printf("Testing a Reverse Array function.\n");
	int array[10] = {0,1,2,3,4,5,6,7,8,9};
	printArray(array, 10);
	int *reverse = reverseArray(array, 10);
	for (int x=0;x<10;x++) {
		printf("%d ", reverse[x]);
	}
	return 0;
}
