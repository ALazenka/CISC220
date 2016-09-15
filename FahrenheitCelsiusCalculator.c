/*
	This program will be able to print of a set list of temperatures,
	converting them from fahrenheit to celsius.
*/
#include <stdio.h>

int main()
{
	
	int fahr;

	printf("Temprature Convertion Table - Celsius to Fahrenheit");
	for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
		printf("%3.0d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}

}