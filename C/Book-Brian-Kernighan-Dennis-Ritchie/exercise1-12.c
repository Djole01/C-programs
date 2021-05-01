#include <stdio.h>

/* copy input to output, each word on new line */
int main()
{
	int c, inspace;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (inspace == 0) {
				inspace = 1;   
				putchar('\n');
			} // else do nothing
		}
		else {
			inspace = 0;
			putchar(c);
		}
	}
	return 0;
}

// ctrl-d == EOF
