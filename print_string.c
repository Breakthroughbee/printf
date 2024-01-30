#include "main.h"
#include <stdio.h>

/**
 * print_string - Prints strings
 * @str: String to be printed
 * Return: Returns number of chars printed
 */

int print_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
