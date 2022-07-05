#include "holberton.h"

/**
 * main - Print "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i = 0;
	char ch[]  = "_putchar";

	while (i < 9)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);

}
