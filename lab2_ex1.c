#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float centimeters, inches; 
	int feet; 

	printf("Input Value: "); 
	scanf("%f", &centimeters);

	inches = centimeters / 2.54; 
	feet = inches /  12; 
	inches = inches - feet * 12; 

	printf("%.1f centimeters is %d feet %.1f inches\n", centimeters, feet, inches);
	return 0;
}