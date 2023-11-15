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

    /*int len2`:;*/
    int len;

    len = _printf("Let's try to printf a simple sentence\\ %c%c %s\n", 72, 'i', 72);
    /*len2 = printf("Let's try to printf a simple sentence\\ %c%c %s\n", 72, 'i', 72);*/

    printf("Length:[%d, %d]\n", len);
    return (0);

}
