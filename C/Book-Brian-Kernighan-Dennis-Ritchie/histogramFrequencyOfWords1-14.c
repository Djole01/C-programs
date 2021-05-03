#include <stdio.h>

#define MAXCHARS 255

/* histogram of frequency of different characters */
int main()
{
	int c;
	int charFreq[MAXCHARS];
	
	for (int i = 0; i <= MAXCHARS; i++)
	{
		charFreq[i] = 0;
	}
	
	while ((c = getchar()) != EOF) 
		charFreq[c] = charFreq[c] + 1;
	
	
	printf("\n");
	for (int i = 0; i <= MAXCHARS; i++)
	{
		if (charFreq[i] != 0){
			printf("char %c frequency: ", i);
				
			for (int j = 0; j < charFreq[i]; j++)
			{
				putchar('*');
			}
			putchar('\n');
		}
	} 
}

// array from 0 to 255
// fill it with 0
// go through chars and increment histogramCharFreq[c] 
