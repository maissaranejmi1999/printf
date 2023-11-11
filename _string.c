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
		return (6);
	} else {
		size_t len = strlen(s);

		write(1, s, len);
	}
	return (len);
}
