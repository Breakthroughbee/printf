#include "main.h"

/**
 * _printf - A function that emulates printf functionalities
 * @format: First string passed to function
 * Return: Returns number of char printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, x;
	int count;
	va_list args;

	count = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
			}
			else if (format[i + 1] == 's')
			{
				x = print_string(va_arg(args, char*));
				count = x + count;
			}
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
