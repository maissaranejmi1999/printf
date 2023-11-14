#include "main.h"

/**
 * _int - prints integer
 * @args: argument
 * Return: len
*/

int _int(va_list args)
{
	int i = va_arg(args, int);
	int x = 0, l = 0, j = 0, len = 0, M = 0;
	int *digit;
	char digitChar;

	if (i == INT_MAX)
	{
		write(1, "2147483647", 10);
		return (10);
	} else if (i == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
		len++;
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
	digit = malloc((l + 1) * sizeof(int));
	if (digit == NULL)
	{
		return (-1);
	}
	for (x = 0; x < l; x++)
	{
		digit[x] = i % 10;
		i = i / 10;
	}
	for (M = (l - 1); M >= 0 ; M--)
	{
		digitChar = digit[M] + '0';
		write(1, &digitChar, 1);
		len++;
	}
	free(digit);
	return (len);
}
