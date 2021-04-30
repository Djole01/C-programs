#include <stdio.h>

/* count blanks, tabs and newlines */
int main()
{
	int c, previousChar;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (previousChar != ' ') {   
				putchar(c);
			} // else do nothing
		}
		if (c != ' ') {
			putchar(c);
		}
		previousChar = c;
	}
	return 0;
}


// ctrl-d == EOF
