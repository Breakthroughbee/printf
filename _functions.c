#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * printchar - fcuntion to print a character
 * @c: character to print
 *
 * Return: the character
 */

int printchar(char c)
{
	return (_putchar(c));
}

/**
 * printstr - function to print a string
 * @str: string to be printed
 *
 * Return: x
 */

int printstr(char *str)
{
	int i = 0;
	int x = 0;

	if (str[i] == '\0')
		return (-1);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		x++;
	}
	return (x);
}

/**
 * printint - function to print a char
 * @n: integer
 *
 * Return: void
 */

int printint(int n)
{
	char a_str[20];
	int i = 0;
	int k;

	if (n == 0)
		return (0);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		a_str[i] = '0' + n % 10;
		i++;
		n /= 10;
	}
	for (k = i - 1; k >= 0; k--)
	{
		_putchar(a_str[k]);
	}
	return (i);
}
