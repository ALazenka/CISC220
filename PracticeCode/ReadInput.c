#include <stdio.h>

/* copies input from user and outputs it to the console */

int main() 
{

	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}

}