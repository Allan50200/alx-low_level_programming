#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase except for 'q and e'
 *
 * Return:0 (success)
 */

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	if (c != 'e' && c != 'q')
		putchar(c);

	putchar('\n');
	return (0);

}