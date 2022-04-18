#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(int ch);
int _printf(const char *format, ...);
void _printString(va_list myList);
void _printFloat(va_list myList);
void _printInt(va_list myList);
void _printChar(va_list myList);

/**
 * converter - Typedef for struct convert
 */
typedef struct convert
{
	char *type;
	void (*func)();
} converter;

#endif
