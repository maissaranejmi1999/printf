#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _int(va_list args);
int _string(va_list args);
int _char(va_list args);
int _putchar(char c);

#endif
