#include <stdio.h>

#define IN 1 	/* inside a word */
#define OUT 0	/* outside a word */
#define MAXWORDS 30

/* histogram of length of words in input */
int main()
{
	int c, nc, nw, state;
	int wordLengthsArray[MAXWORDS];
	state = OUT;
	nc = nw = 0;
	
	for (int i = 0; i <= MAXWORDS; i++)
	{
		wordLengthsArray[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == ' ' || c == '\n' || c == '\t'){
			wordLengthsArray[nw] = nc;
			nc = 0;
			state = OUT;		
		}
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
	
	printf("\n");
	for (int i = 0; i <= MAXWORDS; i++)
	{
		if (wordLengthsArray[i] != 0){
			printf("word %d length: ", i);
			for (int j = 1; j < wordLengthsArray[i]; j++)
			{
				putchar('*');
			}
			putchar('\n');
		}
	}
}
	
