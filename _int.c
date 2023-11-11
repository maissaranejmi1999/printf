#include "main.h"

/**
 * _int - prints integer
 * @args: argument
 * Return: len
*/

int _int(va_list args)
{
	int i = va_arg(args, int);
	int x = 0, len = 0, l = 0, j, m;
	int *digit;

	if (i < 0)
	{
		putchar('-');
		i = -i;
	} else if (i == 0)
	{
		putchar('0');
		return (1);
	} else if (i > 0)
	{
		j = i;
		while (i != 0)
		{
			x = i % 10;
			i = i / 10;
			l++;
		}
		digit = malloc(l * sizeof(int));
		for (m = 0; m < l; m++)
		{
			digit[m] = j % 10;
			j = j / 10;
		}
		for (m = (l - 1); m >= 0 ; m--)
		{
			putchar(digit[m] + '0');
			len++;
		}
	}
	free(digit);
	return (len);
}
