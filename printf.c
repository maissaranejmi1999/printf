#include "main.h"

/**
 * _printf - function
 * @format: ptr
 * Return: the length of what it prints
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	const char *p;

	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			if (*(p + 1) == 'c')
			{
				i += _char(args);
			} else if (*(p + 1) == 's')
			{
				i += _string(args);
			} else if (*(p + 1) == '%')
			{
				_putchar('%');
				i++;
			}
			p++;
		} else
		{
			_putchar(*p);
			i++;
		}
	}
	va_end(args);
	return (i);
}
