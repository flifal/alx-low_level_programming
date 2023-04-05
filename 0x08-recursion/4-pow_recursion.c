#include "main.h"
/**
 * _pow_recursion - computes the value of x reaised to the pow of y
 * @x: base num
 * @y: power raise base to
 * Return: value x raised to the pow of y,
 * -1 if y is under 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
