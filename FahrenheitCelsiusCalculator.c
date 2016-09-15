/*
	This program will be able to print of a set list of temperatures,
	converting them from fahrenheit to celsius.
*/
#include <stdio.h>

int main()
{
	
	float fahr, celsius;
	int upper, lower, step;

	lower = 0; /* lower threshold of the temp table */
	upper = 300; /* upper threshold of the temp table */
	step = 20; /* change in temperature */

	fahr = lower;

	while (fahr <= upper) {
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

}