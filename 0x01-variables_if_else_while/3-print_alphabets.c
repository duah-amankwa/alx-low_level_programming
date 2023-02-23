#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main -  Printing lower and upper case alphabets
 *
 * Return : 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (lower = 'A'; lower <= 'Z'; lower++)
		putchar(lower);
	putchar('\n');

	return(0);
}
