#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <limits.h>


int _printf(const char *format, ...)
{
	int i;
/*	char c;
	char *str;*/
	va_list args;
	i = 0;
	/*j = 0;*/
	va_start(args, *format);
	while (format[i] == '\0')
	{
	/*	if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
			}
			else if (format[i + 1] == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char*);
				while (str[j] != '\0')
				{
					_putchar(str[j]);
					j++;
				}
			}
			i++;
		}
		else
		{
			*/
			_putchar(format[i]);
			i++;
	/*	}*/
	}
	va_end(args);
	return (0);
}
