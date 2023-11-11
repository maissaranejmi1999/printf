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
		len += 6;
	} else {
		for (i = 0; s[i]; i++)
		{
			if (s[i] == '\0')
			{
				write(1, "\\0", 2);
				len += 2;
			} else {
				write(1, &s[i], 1);
				len++;
			}
		}
	}
	return (len);
}
