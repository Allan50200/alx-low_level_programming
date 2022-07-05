#include "main.h"

/**
 * _abs - returns absolute value of an int
 * @n: integer from which to get an absolute value
 * Return: Void.
 */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));

}
