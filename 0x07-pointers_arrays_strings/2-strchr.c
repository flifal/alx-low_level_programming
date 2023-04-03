#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character is a string
 * @s: pointer to a string
 * @c: character to locate
 *
 * Return: pointer to first accurence of the character c in string s, NULL, if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
