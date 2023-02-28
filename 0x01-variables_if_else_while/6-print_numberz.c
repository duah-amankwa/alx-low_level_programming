#include <stdio.h>
/**
 * main- Entry point
 *
 * return : 0 if sucessful
 */
int main(void)
{
	int n = '0';

		while (n <= '9')
		{
			putchar(n);
			n++;
		}
	putchar('\n');
	return (0);
}
