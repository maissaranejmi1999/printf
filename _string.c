#include "main.h"

/**
 * _string - prints string
 * @args: argument
 * Return: length
*/

int _string(va_list args)
{
	char *s = va_arg(args, char *);
	int i, len = 0;

	if (s == NULL)
	{
		s = "(null)";
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
			len++;
		}
	} else
	{
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
