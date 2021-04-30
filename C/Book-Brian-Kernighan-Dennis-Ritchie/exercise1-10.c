#include <stdio.h>

/* copy input to output, replace tabs, backspaces and backslashes with \t, \b and \\ */
int main()
{
	int c, previousChar;

	while((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar ('\\');
        	putchar ('t');
		}
		else if (c == '\b')
		{
			putchar ('\\');
        	putchar ('b');
		}
		else if(c == '\\')
		{
			putchar ('\\');
        	putchar ('\\');
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}

// ctrl-d == EOF
