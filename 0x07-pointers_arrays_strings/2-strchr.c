#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character is a string
 * @s: pointer to a string
 * @c: character to locate
 *
 * Return: pointer to first accurence of the character c in string s, 0, if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
