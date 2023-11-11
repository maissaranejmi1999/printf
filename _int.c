#include "main.h"

/**
 * _int - prints integer
 * @args: argument
 * Return: len
*/

int _int(va_list args)
{
	int i = va_arg(args, int);
	int x = 0, l = 0, j, len = 0;
	int *digit;
	char digitChar;

	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
	} else if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	j = i;
	while (j != 0)
	{
		x = j % 10;
		j = j / 10;
		l++;
	}
	digit = malloc(l * sizeof(int));
	if (digit == NULL)
	{
		return -1;
	}
	for (x = 0; x < l; x++)
	{
		digit[x] = i % 10;
		i = i / 10;
	}
	for (x = (l - 1); x >= 0 ; x--)
	{
		digitChar = digit[x] + '0';
		write(1, &digitChar, 1);
		len++;
	}
	free(digit);
	return (len);
}
