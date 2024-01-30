#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - A function that emulates printf functionalities
 * @format: First string passed to function
 * Return: Returns number of char printed
 */

int _printf(const char *format, ...)
{
	int x = 0;
	va_list args;

	va_start(args, format);
	if (*format == '\0')
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					x += printchar(va_arg(args, int));
					break;
				case 's':
					x += print_string(va_arg(args, char *));
					break;
				case '%':
					x += write(1, "%", 1);
					break;
					case 'd':
					case 'i':
					x += print_int(va_arg(args, int));
					break;
					default:
					break;
			}
		}
		else
		{
			x += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (count);
}
