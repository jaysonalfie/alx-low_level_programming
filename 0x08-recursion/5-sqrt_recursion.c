#include "main.h"

/**
 * sqrt_check - checks for the square root of b
 * @g: guess at sqrt
 * @b: number to find sqrt of
 *
 * Return: -1 or sqrt of b
 */
int sqrt_check(int g, int b)
{
	if (g * g == c)
		return (g);
	if (g * g > b)
		return (-1);
	return (sqrt_check(g + 1, b));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}


