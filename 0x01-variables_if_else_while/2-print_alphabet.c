#include <stdio.h>
/**
 * main : Print alphabtes
 * @void : retuns nothing
 * Return : 0 (Success)
 */
int main(void)
{
        char low = 'a';

        while (low <= 'z')
        {
        putchar(low);
        low++;
        }

        putchar('\n');
        return(0);
