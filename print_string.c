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

/**
 * print_int - function to print a string
 * @n: int
 *
 * Return: void
 */

int print_int(int n)
{
	char a_str[20];
	int x = 0;
	int y;

	if (n == 0)
		return (0);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		a_str[x] = '0' + n % 10;
		y++;
		n /= 10;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(a_str[y]);
	}
	return (x);
}
