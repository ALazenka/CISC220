#include <stdio.h>

/* count lines in input */

int main()
{
	 int c, nl;

	 nl = 0;
	 while ((c = getchar()) != EOF) {
	 	if (c == '\n'){
	 		printf("Found the line end after character number ");
	 		printf("%d\n", nl);
	 	} else {
	 		nl++;
	 	}
 	}
}