/*
	This program will be able to print of a set list of temperatures,
	converting them from fahrenheit to celsius.
*/
#include <stdio.h>

int main()
{
	
	int fahr, celsius, upper, lower, step;

	lower = 0; /* lower threshold of the temp table */
	upper = 300; /* upper threshold of the temp table */
	step = 20; /* change in temperature */

	fahr = lower;

	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}

}