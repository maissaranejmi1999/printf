#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _char(va_list args);
int _string(va_list args);
int _int(va_list args);
int _putchar(char c);

#endif
