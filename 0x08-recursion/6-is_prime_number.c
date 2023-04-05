#include "main.h"
/**
 * is_prime_number - check if num is prime num
 * @n: num is checked
 * Return: 1 if n is a prime number,  0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	if (n == 3)
		return (1);
	if (n % 3 == 0 || n % 5 == 0)
		return (0);
	if (n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19)
		return (1);
	if (n % 7 == 0 || n % 11 == 0 || n % 13 == 0 || n % 17 == 0 || n % 19 == 0)
		return (0);
	return (1);
}
