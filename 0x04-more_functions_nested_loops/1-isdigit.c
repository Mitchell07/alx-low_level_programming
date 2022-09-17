#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: Number to be checked
 *
 * Return: 1 if a digit, Otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
