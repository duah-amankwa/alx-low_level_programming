#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/*Printing all possible combinations of single digits*/
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar((x % 10) + '0');
		if (x == 9)
		/*continue printing comma and space except if x == 9*/
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
