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
		write(1, "(null)", 6);
		len++;
	} else {
		for (i = 0; s[i]; i++)
		{
			write(1, &s[i], 1);
			len++;
		}
	}
	return (len);
}
