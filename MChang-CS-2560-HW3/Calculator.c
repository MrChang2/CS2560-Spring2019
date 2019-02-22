/*
 * Calculator.c
 *
 *  Created on: Feb 15, 2019
 *      Author: mchan
 */
#include <stdio.h>
int areaCircle() {
	double radius = -1;
	while (radius<0) {
		printf("Enter the radius of the circle: \n");
		fflush(stdout);
		scanf("%lf", &radius);
		if (radius<0) {
			printf("Invalid radius, radius can't be negative.\n");
		}
	}
	double area = 3.14159 * radius * radius;
	printf("The area of the circle is %.2f.", area);
	return 0;
}
int areaRectangle() {
	double length, width;
	length = -1;
	width = -1;
	while (length<0) {
		printf("Enter the length of the rectangle: \n");
		fflush(stdout);
		scanf("%lf", &length);
		if (length<0) {
			printf("Invalid length, length can't be negative.\n");
		}
	}
	while (width<0) {
		printf("Enter the width of the rectangle: \n");
		fflush(stdout);
		scanf("%lf", &width);
		if (width<0) {
			printf("Invalid width, width can't be negative.\n");
		}
	}
	double area = length * width;
	printf("The area of the rectangle is %.2f.", area);
	return 0;
}
int areaTriangle() {
	double base, height;
	base = -1;
	height = -1;
	while (base<0) {
		printf("Enter the length of the triangle's base: \n");
		fflush(stdout);
		scanf("%lf", &base);
		if (base<0) {
			printf("Invalid base length, base length can't be negative.\n");
		}
	}
	while (height<0) {
		printf("Enter the height of the triangle: \n");
		fflush(stdout);
		scanf("%lf", &height);
		if (height<0) {
			printf("Invalid height, height can't be negative.\n");
		}
	}
	double area = base * height * 0.5;
	printf("The area of the triangle is %.2f.", area);
	return 0;
}
int main() {
	printf("Geometry Calculator\n");
	printf("1. Calculate the Area of a Circle\n");
	printf("2. Calculate the Area of a Rectangle\n");
	printf("3. Calculate the Area of a Triangle\n");
	printf("4. Nothing\n");
	printf("Enter your choice (1-4):\n");
	int choice;
	int result;
	fflush(stdout);
	scanf("%d", &choice);
	switch(choice) {
		case 1: result = areaCircle(); break;
		case 2: result = areaRectangle(); break;
		case 3: result = areaTriangle(); break;
		case 4: printf("Exiting"); break;
		default: printf("Fine if you wanna be funny, get your calculations somewhere else.");
	}
	return 0;
}

