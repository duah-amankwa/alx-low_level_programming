#include <stdio.h>
/**
 * main- prints digits in base 10 without char,
 *
 * return: Always 0
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
