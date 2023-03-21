#include "main.h"
/**
 * _isalpha - function to sprcify if prined letter or not
 *
 * @c: printed
 * Return: 1 if c is letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
