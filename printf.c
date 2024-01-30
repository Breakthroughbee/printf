#include "main.h"

int _printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, *format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
			}
			i++;
		}
		i++;
	}
	return (0);
}
