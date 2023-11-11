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
	char newline = '\n';

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
			} else if ((*(p + 1) == 'd') || (*(p + 1) == 'i'))
			{
				i += _int(args);
			} else if (*(p + 1) == '%')
			{
				write(1,"%",1);
				i++;
			}
			p++;
		} else if (*p == '\')
		{
			if (*(p + 1) == 'n')
			{
				write(1, &newline, 1);
			} else
			{
				write(1, '\', 1);
			}
			p++;
		} else
		{
			write(1,&(*p),1);
			i++;
		}
	}
	va_end(args);
	return (i);
}
