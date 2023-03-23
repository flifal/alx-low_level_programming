#include <unistd.h>
#include "main.h"

/**
* _putchar - writes the character stdout
* @c: Character to print
* Return: on success 1
* On error -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
