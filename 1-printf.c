#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - this function handles formats
 * @format: a string of characters
 *
 * Return: number of char to be printed
 */

int _printf(const char *format, ...)
{
	int x = 0;
	va_list j;

	va_start(j, format);
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
					x += printchar(va_arg(j, int));
					break;
				case 's':
					x += printstr(va_arg(j, char *));
					break;
				case '%':
					x += write(1, "%", 1);
					break;
				case 'd':
				case 'i':
					x += printint(va_arg(j, int));
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
	va_end(j);
	return (x);
}
