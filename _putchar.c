#include <unistd.h>

/**
 * _putchar - Prints character to stdo
 * @c: Char to be printed
 * Return: Returns
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
