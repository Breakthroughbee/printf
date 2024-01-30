#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * printchar - prints a character
 * @c: character to print
 *
 * Return: the char
 */
int printchar(char c)
{
	return (_putchar(c));
}
/**
 * print_string - Prints strings
 * @str: String to be printed
 * Return: Returns number of chars printed
 */

int print_string(char *str)
{
	int i = 0;
	int count = 0;

	if (str[i] == '\0')
		return (-1);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
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
		x++;
		n /= 10;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(a_str[y]);
	}
	return (x);
}
