#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

    int len2;
    int len;

    len = _printf("Let's try to printf a simple sentence\\ %c%c %s\n", 72, 'i', "Maissara");
    len2 = printf("Let's try to printf a simple sentence\\ %c%c %s\n", 72, 'i', "Maissara");

    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    return (0);

}
