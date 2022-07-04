#include <stdio.h>
/**
 * main - entry point
 *
 * Description: this program prints all single digits
 * Return: 0
 */
int main(void)
{

	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}

	putchar ('\n');
	return (0);
}
