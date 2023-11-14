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
	if (format == NULL)
		return (-1);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			if (*(p + 1) == 'c')
				i += _putchar(va_arg(args, int));
			if (*(p + 1) == 's')
				i += _puts(va_arg(args, char*));
			if (*(p + 1) == '%')
				i += _putchar('%');
			p++;
		} else if (*p == '\\')
		{
			if (*(p + 1) == 'n')
				i += write(1, "\n", 1);
			if (*(p + 1) == '\\')
				i += write(1, "\\", 1);
			else
			{
				va_end(args);
				return (-1);
			}
			p++;
		} else
			i += write(1, &(*p), 1);
	}
	va_end(args);
	return (i);
}
