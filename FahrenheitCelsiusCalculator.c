/*
	This program will be able to print of a set list of temperatures,
	converting them from fahrenheit to celsius.
*/
#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit of table */
#define STEP 20 /* step size */


int main()
{
	
	int fahr;

	printf("Temprature Convertion Table - Celsius to Fahrenheit\n");
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3.0d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}

}