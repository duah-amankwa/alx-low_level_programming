#include <stdio.h>
/**
 * main - Print all numbers of base 16 in lowercase
 *
 * Return : Always 0
 */
int main(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
		putchar('\n');
	return (0);
}
