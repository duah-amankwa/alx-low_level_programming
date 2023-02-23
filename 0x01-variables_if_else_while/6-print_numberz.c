#include <stdio.h>
/**
 * main- Single digits of base 10
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
