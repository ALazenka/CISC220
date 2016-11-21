#include <stdio.h>

/* counts the number of characters inputted */

int main()
{
	long nc;

	while (getchar() != EOF) {
		nc++;
		printf("%ld\n", nc);
	}
}