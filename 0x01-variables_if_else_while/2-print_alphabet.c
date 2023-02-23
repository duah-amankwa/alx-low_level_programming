#include <stdio.h>
/**
 * main : Print alphabtes
 * @void : retuns nothing
 * Return : 0 (Success)
 */
int main(void)
{
        char LOW = 'a';

        while (LOW <= 'z')
        {
        putchar(LOW);
        LOW++;
        }

        putchar('\n');
        return(0);
