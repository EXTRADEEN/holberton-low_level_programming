#include "main.h"

/**
 * _pow_recursion - is a function that returns the value of x,
 * raised to the power y.
 * @x: an input integer
 * @y: an power integer
 * Return: powered x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y -1));
}
