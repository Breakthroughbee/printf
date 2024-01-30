#include "main.h"
#include <unistd.h>

/**
 * _putchar - A funtion to emulate the putchar funcion
 * @c: Char to be printed
 * Return: Returns the char
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
