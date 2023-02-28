#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/* prints the hexadecimal base16,using putchar */
	int x;
	char y;

	for (x = 0 ; x < 10 ; x++)
		putchar((x % 10) + '0');

	for (y = 'a' ; y <= 'f' ; y++)
		putchar(y);
	putchar('\n');

	return (0);
}
