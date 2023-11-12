#include "main.h"

/**
 * _char - prints char
 * @args: argument
 * Return: int
*/

int _char(va_list args)
{
	char c = va_arg(args, int);

	if (c == '\0')
	{
		return (0);
	}
	write(1, &c, 1);
	return (1);
}
