#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* catstrs(const char *first, const char *second);

int main()
{
	char firstString[20], secondString[20], concatString[20];
	strcpy(firstString, "abc + ");
	strcpy(secondString, "def");
	strcpy(concatString, catstrs(firstString, secondString));
	printf("first string: %s\n", firstString);
	printf("second string: %s\n", secondString);
	printf("result string: %s\n", concatString);
}


// Not to be confused with strcat or strcat_s, this function will return a newly
// allocated buffer containing the concatenation of the two input strings. It is
// safe, as it does not mutate the input strings in any way.
char* catstrs(const char *first, const char *second)
{
    size_t flen = strlen(first);
    size_t slen = strlen(second);
    char   *buf = malloc(flen + slen + 1);

    memcpy(buf, first, flen);
    memcpy(buf + flen, second, slen + 1); // Copies the null terminator too!
    return buf;
}
    
    
