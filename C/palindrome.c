#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, reversedN = 0, remainder, originalN;
    // n should be scanfed, but for debugging purposes it's been defined.
    n = 1001;
    originalN = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);

    return 0;
}

