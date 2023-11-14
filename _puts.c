#include "main.h"

/**
 * _puts - puts
 * @str: string
 * Return: num of printed chars
*/

int _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		count++;
	}

	return (count);
}
