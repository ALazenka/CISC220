#include <stdio.h>

/* copies input from user and outputs it to the console */

int main() 
{

	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

}